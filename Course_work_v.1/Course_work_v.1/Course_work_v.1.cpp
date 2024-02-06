

#include <iostream>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <stdio.h>
#include <vector>
#include <conio.h>

#pragma comment(lib, "Ws2_32.lib")
int main()
{
	WSADATA wsData; //Автоматическое получение информации о сокетах и пр.

	int error = WSAStartup(MAKEWORD(2, 2), (&wsData));;  //Запуск сокетов

	if (error == 0)
	{
		printf("WinSock connected\n");
	}
	else
	{
		printf("WinSock Disconected. Error: ");
		printf("%d", WSAGetLastError());
		return(0);
	}
	Sleep(300);


	//Создание и отладка сокета
	SOCKET server_socket = socket(AF_INET/*Семейство адресов IPV4*/, SOCK_STREAM /*Тип сокета - транспортный пртокол TCP*/, 0/*Тип протокола - 0 т.к используем TCP*/);
	if (server_socket == INVALID_SOCKET)
	{
		printf("Socket disconected. Error: %d", WSAGetLastError);
		WSACleanup();
		return(0);
	}
	else
	{
		printf("Socket connected\n");
		
	}

	//Привязка новоиспеченного сокета к IP и Порту
	in_addr ip_to_num;
	error = inet_pton(AF_INET, "192.168.31.155", &ip_to_num); //- перевод IP
	if (error <= 0) {
		printf("Error in IP translation to special numeric format\n");
		return 1;
	}

	sockaddr_in servInfo;
	ZeroMemory(&servInfo, sizeof(servInfo));
	//заполнение информации о сервере
	servInfo.sin_family = AF_INET; //Семейство портов
	servInfo.sin_addr = ip_to_num; //IP
	servInfo.sin_port = htons(6000); //Порт (Пусть са выбирает)

	error = bind(server_socket, (sockaddr*)&servInfo, sizeof(servInfo)); //Привязка
	if (error != 0) {
		printf("Error Socket binding to server info. Error %d \n", WSAGetLastError());
		closesocket(server_socket);
		WSACleanup();
		return 1;
	}
	else
		printf("Binding socket to Server info is OK\n");


	//Начало прослушки потока
	error = listen(server_socket, SOMAXCONN);

	if (error != 0) {
		printf("Can't start to listen to. Error %d",WSAGetLastError);
		closesocket(server_socket);
		WSACleanup();
		return 1;
	}
	else {
		printf("listening\n");
	}

	//подтверждение
	sockaddr_in clientInfo;

	ZeroMemory(&clientInfo, sizeof(clientInfo));

	int clientInfo_size = sizeof(clientInfo);

	SOCKET ClientConn = accept(server_socket, (sockaddr*)&clientInfo, &clientInfo_size);

	if (ClientConn == INVALID_SOCKET) {
		printf("Client detected, but can't connect to a client. Error %d\n",WSAGetLastError);
		closesocket(server_socket);
		closesocket(ClientConn);
		WSACleanup();
		return 1;
	}
	else
		printf("Connection to a client established successfully\n"); 

	//Обмен
	
	int o = 0;
	char recv_data[100];
	char send_data[100];
	send_data[0] = 'х';
	send_data[1] = 'y';
	send_data[2] = 'й';
	
	char* re = recv_data;
	char* se = send_data;
	int a=send(server_socket, se, 100, 0);
	/*while (o == 0);
	{
		for (int i = 0; i++; i <= 100)
		{
			recv_data[i] = ' ';
			send_data[i] = ' ';
		}
		int a = recv(server_socket, recv_data, 100, 0);
		if ((recv_data[5] != 5) || (recv_data[7] != 7) && (recv_data[9] != 9))
		{
			printf("Собеседник:");
			for (int i = 0; i++; i <= 99)
			{
				printf("%c", recv_data[i]);
			}
			printf("\n");
		}
		Sleep(500);
		if (_kbhit)
		{
			for (int i = 0; i++; i <= 100)
			{
				int h = _getch();
				if (((h >= 224) && (h <= 241)) || ((h >= 32) && (h <= 175)) || (h == 252))
					send_data[i] = h;
				if (h == 13)
					i = 100;
				
			}
		}
		else
		{
			send_data[5] = 5;
			send_data[7] = 7;
			send_data[9] = 9;
		}
		a = send(server_socket, send_data, 100, 0);
		

	}*/

	closesocket(server_socket);
	WSACleanup();
}
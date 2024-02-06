#include <SFML/Graphics.hpp>
#include <iostream> 
#include <vector>
#include "windows.h"
#include <list>
#include <conio.h>
#include <string>
#include <fstream>
using namespace sf;

struct leader
{
	std::string Red;
	std::string Blue;
	int score;
};
struct Coord
{
	int X;
	int Y;
};
const float Pi = 3.14159265;

class Bullet
{ // класс Игрока
public:
	float x, y, w, h, speed = 0.8; //координаты игрока х и у, высота ширина, ускорение (по х и по у), сама скорость
	float dirX; //направление (direction) движения игрока
	float dirY;
	int rectX=1;
	int rectY=1;
	int type;
	float rotation;
	
	Sprite sprite;//сфмл спрайт
	



	Bullet(Sprite sp,float X, float Y,int Type,int Owner, float dx, float dy)
	{  //Конструктор с параметрами(формальными) для класса Player. При создании объекта класса мы будем задавать имя файла, координату Х и У, ширину и высоту
		//File = "Bullet1.png";//имя файла+расширение
		w = 3; h = 10;//высота и ширина
		type = Type;
		sprite = sp;
		//sprite.setTextureRect(IntRect(rectX, rectY, w, h));
		if((type!=1)&&(type!=4)) sprite.setScale(4.0f, 4.0f);
		if (type == 4) { sprite.setScale(6.0f, 6.0f); speed = 0.4; y = -500; }
		x= X; y = Y;//координата появления спрайта
		dirX = dx;
		dirY = dy;
		if (type == 1) { speed = 0.6; }
		if ((type != 0)) { dirX = (dx - x) / sqrt(pow((dx - x),2) + pow((dy - y),2)); dirY = (dy - y) / sqrt(pow((dx - x),2) + pow((dy - y),2)); sprite.rotate(180); }
		//if ((type != 0) && (dx < x)) { dirX = (x - dx) / (abs(dx - x) + (dy - y)); dirY = (y - dy) / (abs(dx - x) + (dy - y)); sprite.rotate(180);  }
	}
	void update(float time) //функция "оживления" объекта класса. update - обновление. принимает в себя время SFML , вследствие чего работает бесконечно, давая персонажу движение.
	{
		
		
		
		y += speed * time*dirY;//аналогично по игреку

		x += speed * time * dirX;
		
		//зануляем скорость, чтобы персонаж остановился.
		sprite.setPosition(x, y); //выводим спрайт в позицию x y , посередине. бесконечно выводим в этой функции, иначе бы наш спрайт стоял на месте.
	}
};


class Player
{ // класс Игрока
public:
	float x, y, w, h, dx, dy, speed = 0; //координаты игрока х и у, высота ширина, ускорение (по х и по у), сама скорость
	int dirX; //направление (direction) движения игрока
	int dirY;
	int rectX;
	int rectY;
	float HP;
	int score;
	int life;

	String File; //файл с расширением
	Image image;//сфмл изображение
	Texture texture;//сфмл текстура
	Sprite sprite;//сфмл спрайт
	Texture Deadtexture;
	std::vector <Coord> HitBox;

	Player(String F, float X, float Y,Texture DT)
	{  //Конструктор с параметрами(формальными) для класса Player. При создании объекта класса мы будем задавать имя файла, координату Х и У, ширину и высоту
		File = F;//имя файла+расширение
		w = 16; h =16;//высота и ширина
		dirX = 0;
		dirY = 0;
		Deadtexture = DT;
		dx = 0;
		dy = 0;
		HP = 100;
		rectX = 17;
		rectY = 17;
		score = 0;
		life = 3;
		image.loadFromFile("IMG_resourses/" + File);//запихиваем в image наше изображение вместо File мы передадим то, что пропишем при создании объекта. В нашем случае "hero.png" и получится запись идентичная 	image.loadFromFile("images/hero/png");
		image.createMaskFromColor(Color(255, 255, 255));//убираем ненужный темно-синий цвет, эта тень мне показалась не красивой.
		texture.loadFromImage(image);//закидываем наше изображение в текстуру
		sprite.setTexture(texture);//заливаем спрайт текстурой
		sprite.setTextureRect(IntRect(rectX, rectY, w, h));
		sprite.setScale(5.0f, 5.0f);
		Coord now;
		x = X; y = Y;//координата появления спрайта
		 for (int i=0;i<=16;i++)
			 for(int j=0;j<=16;j++)
			{
				 now.X = i;
				 now.Y = j; 
				 HitBox.push_back(now);
			 }

	}
	

	void update(float time) //функция "оживления" объекта класса. update - обновление. принимает в себя время SFML , вследствие чего работает бесконечно, давая персонажу движение.
	{
		sprite.setColor(Color(255, 255, 255, 255));
		rectX = 16;
		rectY = 16;
		
		switch (dirX)//реализуем поведение в зависимости от направления. (каждая цифра соответствует направлению)
		{
		case 1: if (x < 1920 - 420 - 80-5) { dx = speed; rectX += 16; }  break;//по иксу задаем отрицательную скорость, по игреку зануляем. получается, что персонаж идет только влево
		case -1: if (x > 420) { dx = -speed; rectX -= 16; }  break;
		}
		switch (dirY)//реализуем поведение в зависимости от направления. (каждая цифра соответствует направлению)
		{
		case 1: if (y > 1) { dy = speed; rectY -= 16; }  break;//по иксу задаем отрицательную скорость, по игреку зануляем. получается, что персонаж идет только влево
		case -1: if (y < 1080 - 80) { dy = -speed;  rectY += 16; } break;
		}
		sprite.setTextureRect(IntRect(rectX, rectY, w, h));

		x += dx * time;//то движение из прошлого урока. наше ускорение на время получаем смещение координат и как следствие движение
		y+= -dy * time;//аналогично по игреку

		dx = 0;
		dy = 0;
		dirX = 0;
		dirY = 0;
		speed = 0;//зануляем скорость, чтобы персонаж остановился.
		sprite.setPosition(x, y); //выводим спрайт в позицию x y , посередине. бесконечно выводим в этой функции, иначе бы наш спрайт стоял на месте.

		if (HP <= 0) { HP = 11000; sprite.setTexture(Deadtexture); }
		if (HP >= 10000) { HP += 200;  sprite.setTextureRect(IntRect(0, 0, 25, 25)); speed = 0; }
		if (HP >= 10700) { sprite.setTextureRect(IntRect(0, 25, 25, 25)); sprite.setScale(4.0f, 4.0f);  }
		if (HP >= 11500) { sprite.setTextureRect(IntRect(0, 50, 25, 25));sprite.setScale(4.0f, 4.0f); }
		if (HP >= 12000) { sprite.setTextureRect(IntRect(0, 75, 25, 25)); sprite.setScale(4.0f, 4.0f);  }
		if (HP >= 13000) { sprite.setTextureRect(IntRect(0, 100, 25, 25)); sprite.setScale(4.0f, 4.0f);  }
		if (HP >= 15000) { sprite.setTextureRect(IntRect(0, 125, 25, 25)); sprite.setScale(4.0f, 4.0f);  }
		if (HP >= 17000) { x = 1000000; y = -100000; HP = 99999; }
		
	}
};

class Enemy
{
public:
	float x, y, speed = 0.2; //координаты игрока х и у, высота ширина, ускорение (по х и по у), сама скорость
	int dirX = 0; //направление (direction) движения игрока
	int dirY = 0;
	int rectX = 1;
	int rectY = 1;
	float Targ_x;
	float Targ_y;
	int type;
	int HP;
	float RedX;
	float BlueX;
	float RedY;
	float BlueY;
	bool alive;
	std::vector <Coord> HitBox;
	Clock CouldDownClock;
	float CoulDown;


	Sprite sprite;//сфмл спрайт

	Enemy(Sprite sp, float X, float Y, int Type)
	{  //Конструктор с параметрами(формальными) для класса Player. При создании объекта класса мы будем задавать имя файла, координату Х и У, ширину и высоту
		//File = "Bullet1.png";//имя файла+расширение
		alive = true;
		type = Type;
		sprite = sp;
		//sprite.setTextureRect(IntRect(rectX, rectY, w, h));
		sprite.setScale(2.0f, 2.0f);
		Targ_x = X; Targ_y = Y;//координата появления спрайта
		x = Targ_x;
		y = -500;
		Coord now;
		switch (type)
		{
		case 1:
		{
			HP = 150;
			for (int i = 2; i <= 4; i++) for (int j = 2; j <= 37; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			for (int i = 5; i <= 37; i++) for (int j = 9; j <= 23; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			for (int i = 10; i <= 32; i++) for (int j = 24; j <= 35; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			for (int i = 38; i <= 40; i++) for (int j = 2; j <= 37; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			break;
		}
		case 2:
		{
			HP = 100;
			for (int i = 42; i <= 50; i++) for (int j = 70; j <= 74; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			for (int i = 34; i <= 58; i++) for (int j = 36; j <= 68; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			for (int i = 38; i <= 42; i++) for (int j = 2; j <= 34; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			for (int i = 50; i <= 54; i++) for (int j = 2; j <= 34; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			for (int i = 18; i <= 38; i++) { now.X = (i - 18) * 2; now.Y = i; HitBox.push_back(now); now.X = (i - 18) * 2 + 1; now.Y = i; HitBox.push_back(now); }
			for (int i = 20; i <= 40; i++) { now.X = (i - 20) * 2; now.Y = i; HitBox.push_back(now); now.X = (i - 20) * 2 + 1; now.Y = i; HitBox.push_back(now); }
			for (int i = 22; i <= 42; i++) { now.X = (i - 2) * 2; now.Y = i; HitBox.push_back(now); now.X = (i - 22) * 2 + 1; now.Y = i; HitBox.push_back(now); }
			for (int i = 32; i <= 34; i++) for (int j = 38; j <= 48; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			for (int i = 58; i <= 60; i++) for (int j = 38; j <= 48; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			break;
		}
		case 3:
		{
			HP = 15;
			speed = 0.5;
			for (int i = 4; i <= 24; i++) for (int j = 12; j <= 42; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			for (int i = 8; i <= 20; i++) for (int j = 44; j <= 50; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			y = -1000;
			break;
		}
		case 4:
			HP = 800;
			speed = 0.1;
			for (int i = 30; i <= 96; i++) for (int j = 0; j <= 240; j++) { now.X = i; now.Y = j; HitBox.push_back(now); }
			sprite.setScale(3.0f, 3.0f);
			

		}
	}
	void update(float time, Player RedP, Player BlueP) //функция "оживления" объекта класса. update - обновление. принимает в себя время SFML , вследствие чего работает бесконечно, давая персонажу движение.
	{
		RedX = RedP.x;
		RedY = RedP.y;
		BlueX = BlueP.x;
		BlueY = BlueP.y;
		if (abs(Targ_x - x) > 10)
		{
			if (Targ_x - x > 0) { dirX = 1; }
			else { dirX = -1; }
		}
		if (abs(Targ_y - y) > 10)
		{
			if (Targ_y - y > 0) { dirY = 1; }
			else { dirY = -1; }
		}

		CoulDown = CouldDownClock.getElapsedTime().asMicroseconds();

		switch (type)
		{
		case 1: break;
		case 2:
		{
			if ((dirX == 0) && (x < 960)) Targ_x = 1400;
			if ((dirX == 0) && (x > 960)) Targ_x = 420;
			break;
		}
		case 3:
		{
			if (sqrt((x - RedX) * (x - RedX) + (y - RedY) * (y - RedY)) < sqrt((x - BlueX) * (x - BlueX) + (y - BlueY) * (y - BlueY))) { Targ_x = RedX + 8; Targ_y = RedY + 16; }
			else { Targ_x = BlueX + 16; Targ_y = BlueY + 24; }

		}
		case 4:
		{

		}
		}

		x += dirX * speed * time;
		y += dirY * speed * time;



		dirX = 0;
		dirY = 0;
		//зануляем скорость, чтобы персонаж остановился.
		sprite.setPosition(x, y); //выводим спрайт в позицию x y , посередине. бесконечно выводим в этой функции, иначе бы наш спрайт стоял на месте.

		CoulDown = CouldDownClock.getElapsedTime().asMicroseconds();

	};
};

class Space
{ // класс Игрока
public:
	float x, y1, y2,  speed ; //координаты игрока х и у, высота ширина, ускорение (по х и по у), сама скорость
	

	String File; //файл с расширением
	Image image;//сфмл изображение
	Texture texture;//сфмл текстура
	Sprite sprite1;//сфмл спрайт
	Sprite sprite2;

	Space(String F, float L)
	{  //Конструктор с параметрами(формальными) для класса Player. При создании объекта класса мы будем задавать имя файла, координату Х и У, ширину и высоту
		File = F;//имя файла+расширение
		
		image.loadFromFile("C:/Course_work1/Course_work1/IMG_resourses/" + File);//запихиваем в image наше изображение вместо File мы передадим то, что пропишем при создании объекта. В нашем случае "hero.png" и получится запись идентичная 	image.loadFromFile("images/hero/png");
		speed = 0.3;
		texture.loadFromImage(image);//закидываем наше изображение в текстуру
		sprite1.setTexture(texture);//заливаем спрайт текстурой
		sprite1.setScale(4.5f, 4.5f);
		//sprite1.setTextureRect(IntRect(0, 0, 240, 480));
		sprite2.setTexture(texture);//заливаем спрайт текстурой
		sprite2.setScale(4.5f, 4.5f);
		//sprite2.setTextureRect(IntRect(0,480, 240, 480));
		x = 420.0; y1 = 0; y2 = -4139;//координата появления спрайта
		
		//sprite.setTextureRect(IntRect(0, 0, w, h));  //Задаем спрайту один прямоугольник для вывода одного льва, а не кучи львов сразу. IntRect - приведение типов
	}
	void update(float time) //функция "оживления" объекта класса. update - обновление. принимает в себя время SFML , вследствие чего работает бесконечно, давая персонажу движение.
	{
		
		y1 += speed * time;//аналогично по игреку
		y2 += speed * time;

		if (y1 >= 4139) { y2 = y1 - 4139;  y1 = -4139; }
		if (y2 >= 4139) { y1 = y2 - 4139;  y2 = -4139; }
		
		//зануляем скорость, чтобы персонаж остановился.
		sprite1.setPosition(x, y1); //выводим спрайт в позицию x y , посередине. бесконечно выводим в этой функции, иначе бы наш спрайт стоял на месте.
		sprite2.setPosition(x, y2);
	}
};


int symb_size(int length)
{
	if ((length>21) && (length<=27)) { return 20; }
	if ((length > 18) && (length <= 21)) { return 25; }
	if ((length > 16) && (length <= 28)) { return 30; }
	if ((length > 14) && (length <= 16)) { return 35; }
	if ((length > 12) && (length <= 14)) { return 40; }
	switch (length)
	{
	case 12: {return 45; break; }
	case 11: {return 50; break; }
	case 10: {return 55; break; }
	case 9: {return 60; break; }
	case 8: {return 70; break; }
	case 7: {return 80; break; }
	case 6: {return 90; break; }
	}
	if (length <= 5) { return 110; }

}


int main()
{ 
	  
	

	
	
	
	std::string path = "Players.malloy";
	
	
	
	

	Image RedHbarIm;
	RedHbarIm.loadFromFile("IMG_resourses/RedHbar.png");
	RedHbarIm.createMaskFromColor(Color(255, 255, 255));
	Texture RedHbarTe;
	RedHbarTe.loadFromImage(RedHbarIm);
	Sprite RedHbarSp;
	RedHbarSp.setTexture(RedHbarTe);
	RedHbarSp.setScale(4.0f, 4.0f);

	Image BlueHbarIm;
	BlueHbarIm.loadFromFile("IMG_resourses/BlueHbar.png");
	BlueHbarIm.createMaskFromColor(Color(255, 255, 255));
	Texture BlueHbarTe;
	BlueHbarTe.loadFromImage(BlueHbarIm);
	Sprite BlueHbarSp;
	BlueHbarSp.setTexture(BlueHbarTe);
	BlueHbarSp.setScale(4.0f, 4.0f);

	Image HbarIm;
	HbarIm.loadFromFile("IMG_resourses/Border.png");
	HbarIm.createMaskFromColor(Color(255, 255, 255));
	Texture HbarTe;
	HbarTe.loadFromImage(HbarIm);
	Sprite HbarSp;
	HbarSp.setTexture(HbarTe);
	HbarSp.setScale(4.0f, 4.0f);


	Image Bulimage;
	Bulimage.loadFromFile("IMG_resourses/Bullet0.png");
	Bulimage.createMaskFromColor(Color(0, 0, 0));
	Texture Bultexture;
	Bultexture.loadFromImage(Bulimage);
	Sprite Bulsprite;
	Bulsprite.setTexture(Bultexture);

	Image Bulimage1;
	Bulimage1.loadFromFile("IMG_resourses/Bullet1.BMP");\
	Bulimage1.createMaskFromColor(Color(255, 255, 255));
	Texture Bultexture1;
	Bultexture1.loadFromImage(Bulimage1);
	Sprite Bulsprite1;
	Bulsprite1.setTexture(Bultexture1);

	Image Enemyimage;
	Enemyimage.loadFromFile("IMG_resourses/Enemies.png");
	Enemyimage.createMaskFromColor(Color(255, 255, 255));
	Texture Enemytexture;
	Enemytexture.loadFromImage(Enemyimage);
	Sprite Enemy1sprite;
	Enemy1sprite.setTexture(Enemytexture);
	Enemy1sprite.setTextureRect(IntRect(600, 259, 41, 32));

	Sprite Enemy2sprite;
	Enemy2sprite.setTexture(Enemytexture);
	Enemy2sprite.setTextureRect(IntRect(256, 3, 46, 38));

	Sprite Enemy3sprite;
	Enemy3sprite.setTexture(Enemytexture);
	Enemy3sprite.setTextureRect(IntRect(445, 254, 12, 26)); 

	Sprite Enemy4sprite;
	Enemy4sprite.setTexture(Enemytexture);
	Enemy4sprite.setTextureRect(IntRect(184, 257, 52, 83));

	Image menuimage;
	menuimage.loadFromFile("IMG_resourses/Menu.png");
	Texture menutexture;
	menutexture.loadFromImage(menuimage);
	Sprite menusprite;
	menusprite.setTexture(menutexture);



	bool Red_Bullet_Flag = false;
	bool Blue_Bullet_Flag = false;
	bool isPassEnter = true;
	bool pause = true;
	

	std::string RedName;
	std::string BlueName;
	
	int red_size = 20;
	int blue_size = 20;
	int score = 0;

	RenderWindow window(VideoMode(1920, 1080), "Space Specops",Style::Fullscreen);
	bool sure = false;
	bool play = false;
	bool game = true;
	bool menu = true;
	bool name = false;
	bool game_over = false;
	bool leaderboard = false;
	while (game)
	{
		Sleep(50);
		int arrow = 1;
		while (menu)
		{
			window.clear();
			bool ret = true;
			Event event;
			while (window.pollEvent(event))
			{
				if (event.type == Event::Closed)
					window.close();
			}
			
			//if ((Keyboard::isKeyPressed(Keyboard::Escape))) {
			//	menu = false; game = false; window.close();
			//}
			window.draw(menusprite);
			
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				switch (arrow)
				{
				case 1: {name = true;  menu = false; RedName.clear(); BlueName.clear(); Sleep(100); break; }
				case 2: {leaderboard = true; menu = false; Sleep(100); break; }
				case 3: {menu = false; game = false; break; }
				}
			}
			if (arrow == 0) { arrow = 3; }
			if (arrow == 4) { arrow = 1; }
			Font PixFont;
			PixFont.loadFromFile("F77 Minecraft.ttf");
			
			if (ret) Sleep(50);
			if (Keyboard::isKeyPressed(Keyboard::Up)) { arrow -= 1; ret = true; Sleep(60);}
			if (Keyboard::isKeyPressed(Keyboard::Down)) { arrow += 1; ret = true; Sleep(60);
			}
			Text BigTextBack("", PixFont, 100);
			BigTextBack.setPosition(755, 95);
			BigTextBack.setOutlineColor(Color::Cyan);
			BigTextBack.setFillColor(Color::Cyan);
			BigTextBack.setString(L"Space");
			window.draw(BigTextBack);
			BigTextBack.setPosition(455, 205);
			BigTextBack.setOutlineColor(Color::Cyan);
			BigTextBack.setFillColor(Color::Cyan);
			BigTextBack.setString(L"Specoperations");
			window.draw(BigTextBack);




			Text BigText("", PixFont, 100);
			BigText.setPosition(760, 100);
			BigText.setOutlineColor(Color::White);
			BigText.setFillColor(Color::White);
			BigText.setString(L"Space");
			window.draw(BigText);
			BigText.setPosition(460, 210);
			BigText.setOutlineColor(Color::White);
			BigText.setFillColor(Color::White);
			BigText.setString(L"Specoperations");
			window.draw(BigText);


			

			if (arrow == 1)
			{
				Text PlayText("", PixFont, 80);
				PlayText.setPosition(50, 380);
				PlayText.setOutlineColor(Color::White);
				PlayText.setFillColor(Color::White);
				PlayText.setString(L"Новая игра");
				window.draw(PlayText);
			}
			else
			{
				Text PlayText("", PixFont, 60);
				PlayText.setPosition(50, 400);
				PlayText.setOutlineColor(Color::White);
				PlayText.setFillColor(Color::White);
				PlayText.setString(L"Новая игра");
				window.draw(PlayText);
			}


			if (arrow == 2)
			{
				Text TopText("", PixFont, 80);
				TopText.setPosition(50, 480);
				TopText.setOutlineColor(Color::White);
				TopText.setFillColor(Color::White);
				TopText.setString(L"Лучшие игроки");
				window.draw(TopText);

			}
			else
			{
				Text TopText("", PixFont, 60);
				TopText.setPosition(50, 500);
				TopText.setOutlineColor(Color::White);
				TopText.setFillColor(Color::White);
				TopText.setString(L"Лучшие игроки");
				window.draw(TopText);
			}


			if (arrow == 3)
			{
				Text ExText("", PixFont, 80);
				ExText.setPosition(50, 580);
				ExText.setOutlineColor(Color::White);
				ExText.setFillColor(Color::White);
				ExText.setString(L"Выход");
				window.draw(ExText);
			}
			else
			{
				Text ExText("", PixFont, 60);
				ExText.setPosition(50, 600);
				ExText.setOutlineColor(Color::White);
				ExText.setFillColor(Color::White);
				ExText.setString(L"Выход");
				window.draw(ExText);
			}
			
		
			
			
		
			window.display();
			
		}
		bool red = true;
		bool blue = false;
		Clock nameCD;
		nameCD.restart();
		while (name)
		{
			
			
			window.clear();
			bool ret = true;
			Event event;
			while (window.pollEvent(event))
			{
				if (event.type == Event::Closed)
					window.close();
			}

			if ((Keyboard::isKeyPressed(Keyboard::Escape))) {
				menu = true; name = false; red = true; blue = false; play = false; break;
			}
			window.draw(menusprite);
			
			Font PixFont;
			PixFont.loadFromFile("F77 Minecraft.ttf");
			if (red)
			{
				Text BigText("", PixFont, 60);
				BigText.setPosition(200, 300);
				BigText.setOutlineColor(Color::White);
				BigText.setFillColor(Color::White);
				BigText.setString(L"Введите имя для красного игрока:");

				Text NameText("", PixFont, 80);
				NameText.setPosition(200, 400);
				NameText.setOutlineColor(Color::Red);
				NameText.setFillColor(Color::Red);
				if (Keyboard::isKeyPressed(Keyboard::BackSpace))
				{
					if(RedName.size()>0)RedName.erase(RedName.size()-1);
					Sleep(50);
				}
				else
				if(not(Keyboard::isKeyPressed(Keyboard::Enter)))
				if ((event.type == sf::Event::TextEntered && isPassEnter)&&(RedName.size()<=27))
				{
					if((nameCD.getElapsedTime().asMicroseconds()>500000)||(RedName.size()==0)||(static_cast<char>(event.text.unicode)!=RedName[RedName.size() - 1]))
					if (event.text.unicode < 128)
					{
						RedName += static_cast<char>(event.text.unicode);
						nameCD.restart();
						
					}
					
				}
				NameText.setString(RedName);
				
				
				
				if ((Keyboard::isKeyPressed(Keyboard::Enter))&&(RedName.size()>0))
				{
					red = false;
					blue = true;
					menu = false;
					play = false;
					name = true;
					red_size = symb_size(RedName.size());
					Sleep(100);
					
				}
				window.draw(NameText);
				window.draw(BigText);
				
			}
			if (blue)
			{
				Text BigText("", PixFont, 60);
				BigText.setPosition(200, 300);
				BigText.setOutlineColor(Color::White);
				BigText.setFillColor(Color::White);
				BigText.setString(L"Введите имя для синего игрока:");

				Text NameText("", PixFont, 80);
				NameText.setPosition(200, 400);
				NameText.setOutlineColor(Color::Blue);
				NameText.setFillColor(Color::Blue);
				if (Keyboard::isKeyPressed(Keyboard::BackSpace))
				{
					if (BlueName.size() > 0) BlueName.erase(BlueName.size());
					Sleep(200);
				}
				else
				if (not(Keyboard::isKeyPressed(Keyboard::Enter)))
				if ((event.type == sf::Event::TextEntered && isPassEnter) && (BlueName.size() <= 27))
				{
					if ((nameCD.getElapsedTime().asMicroseconds() > 500000) || (BlueName.size() == 0) || (static_cast<char>(event.text.unicode) != BlueName[BlueName.size() - 1]))
					if (event.text.unicode < 128)
					{
						BlueName.push_back(static_cast<char>(event.text.unicode));
						nameCD.restart();
						
					}


				}
				NameText.setString(BlueName);
				
				if ((Keyboard::isKeyPressed(Keyboard::Enter))&&(BlueName.size()>0))
				{
					blue = false;
					play = true;
					name = false;
					menu = false;
					blue_size = symb_size(BlueName.size());
					Sleep(100);
				}
				window.draw(NameText);
				window.draw(BigText);

			}
			window.display();
		}
		if (game_over)
		{
			Font PixFont;
			PixFont.loadFromFile("F77 Minecraft.ttf");
			window.clear();
			window.draw(menusprite);
			Text BigText("", PixFont, 120);
			BigText.setPosition(200, 300);
			BigText.setOutlineColor(Color::White);
			BigText.setFillColor(Color::White);
			BigText.setString(L"Игра окончена");
			window.draw(BigText);
			Text MiddleText("", PixFont, 120);
			MiddleText.setPosition(200, 420);
			MiddleText.setOutlineColor(Color::White);
			MiddleText.setFillColor(Color::White);
			MiddleText.setString(L"Вы набрали "+std::to_string(score)+L" очков!");
			window.draw(MiddleText);
			window.display();
			Sleep(1000);
			while (game_over)
			{
				window.clear();
				bool ret = true;
				Event event;
				while (window.pollEvent(event))
				{
					if (event.type == Event::Closed)
						window.close();
				}
				window.draw(menusprite);
				window.draw(BigText);
				window.draw(MiddleText);
				Text SmallText("", PixFont, 40);
				SmallText.setPosition(200, 540);
				SmallText.setOutlineColor(Color::White);
				SmallText.setFillColor(Color::White);
				SmallText.setString(L"(Нажмите любую клавишу)");
				window.draw(SmallText);
				window.display();
				if ((event.type == sf::Event::TextEntered && isPassEnter))
				{
					game_over = false; menu = true; score = 0; Sleep(200);
				}
			}
			
		}
		if (leaderboard)
		{
			Font PixFont;
			PixFont.loadFromFile("F77 Minecraft.ttf");
			window.clear();
			window.draw(menusprite);
			window.display();
			bool ret = true;
			
			std::vector <leader> Top;
			std::ifstream fin;
			fin.open(path);
			
			while (!fin.eof())
			{
				int res;
				leader A;
				std::string strR;
				std::string strB;
				std::string Sc;
				std::getline(fin, strR);
				if (strR.empty()) std::getline(fin, strR);
				std::getline(fin, strB);
				if (strB.empty()) std::getline(fin, strB);
				std::getline(fin, Sc);
				if (Sc.empty()) std::getline(fin, Sc);
				if (!Sc.empty())  res = std::stoi(Sc); else res = 0;
				A.Blue = strB;
				A.Red = strR;
				A.score = res;
				if (!((A.Blue == "") || (A.Red == "") || (A.score == 0)))
				Top.push_back(A);
			}
			
			auto iter = Top.begin();
			fin.close();
			leader A;
			bool flagTop = true;
			while (flagTop)
			{
				flagTop = false;
				for (int i = 1; i <= Top.size() - 1; i++)
				if ((Top[i-1].score)<Top[i].score)
				{
					flagTop = true;
					A = Top[i];
					Top[i] = Top[i-1];
					Top[i - 1] = A;
				}
			}
			arrow = 1;
			while (leaderboard)
			{
				std::vector <std::string> leaders;
				std::ifstream fin;
				
				window.clear();
				Event event;
				while (window.pollEvent(event))
				{
					if (event.type == Event::Closed)
						window.close();
				}


				if ((Keyboard::isKeyPressed(Keyboard::Escape))) {
					menu = true; leaderboard = false;
				}
				window.draw(menusprite);
				Text BigTextBack("", PixFont, 120);
				BigTextBack.setPosition(400, 50);
				BigTextBack.setOutlineColor(Color::White);
				BigTextBack.setFillColor(Color::White);
				BigTextBack.setString(L"Лучшие из нас");
				window.draw(BigTextBack);

				if (Top.size() <= 5)
				{
					Text SmallTextBack("", PixFont, 100);
					SmallTextBack.setOutlineColor(Color::White);
					SmallTextBack.setFillColor(Color::White);
					for (int i = 0; i <= Top.size() - 1; i++)
					{
						SmallTextBack.setPosition(500, 200 + 120 * i);
						SmallTextBack.setString(Top[i].Red + " " + Top[i].Blue + " " + std::to_string(Top[i].score));
						window.draw(SmallTextBack);
					}
					window.display();
				}

				if (Top.size() > 5)
				{
					
					if (ret) Sleep(50);
					ret = false;
					if (Keyboard::isKeyPressed(Keyboard::Up)) { arrow -= 1; ret = true; Sleep(60); }
					if (Keyboard::isKeyPressed(Keyboard::Down)) { arrow += 1; ret = true; Sleep(60); }
					if (arrow == 0) { arrow = Top.size()-5; }
					if (arrow == Top.size() -4) { arrow = 1; }

					Text SmallTextBack("", PixFont, 80);
					SmallTextBack.setOutlineColor(Color::White);
					SmallTextBack.setFillColor(Color::White);
					for (int i = 0; i <= 5; i++)
					{
						SmallTextBack.setPosition(200, 200 + 110 * i);
						SmallTextBack.setString(std::to_string(i+arrow)+". "+Top[i + arrow - 1].Red + L" и " + Top[i + arrow - 1].Blue + L" Очков: " + std::to_string(Top[i + arrow - 1].score));
						window.draw(SmallTextBack);
					}
					window.display();
					
					
				}
			}
				
		}

		std::string nickname;
		if (play)
		{
			std::vector <Bullet> Red_bullets;
			std::vector <Bullet> Blue_bullets;
			std::vector <Enemy> Enemies;
			std::vector <Bullet> Enemy_bullets;
			Clock clock;
			Clock RHPCD;
			Clock BHPCD;
			clock.restart();
			//Clock frame_clock;
			//int frames=0;
			Clock Red_CouldDownClock;
			Red_CouldDownClock.restart();
			float Red_CoulDown;
			Clock EnemiesCouldDown;
			Clock Blue_CouldDownClock;
			Blue_CouldDownClock.restart();
			float Blue_CoulDown;
		
			Player Pr("Red_Ship.png", 650, 800,Enemytexture);
			Player Pb("Blue_Ship.png", 1270, 800, Enemytexture);
			Space Sp("Space.png", 1196);
			int wave = 0;;




			//frame_clock.restart();
			while ((window.isOpen()) && (play))
			{
				bool stop = false;
				if (sure) stop = true;
				while (sure)
				{
					window.clear();
					bool ret = true;
					Event event;
					while (window.pollEvent(event))
					{
						if (event.type == Event::Closed)
							window.close();
					}

					//if ((Keyboard::isKeyPressed(Keyboard::Escape))) {
					//	menu = false; game = false; window.close();
					//}
					window.draw(menusprite);

					if (Keyboard::isKeyPressed(Keyboard::Enter))
					{
						switch (arrow)
						{
						case 1: 
						{
							play = false; 
							game_over = true; 
							sure = false;
							std::ofstream fout;
							fout.open(path, std::ofstream::app);
							fout << RedName << "\n";
							fout << BlueName << "\n"; 
							fout << Pr.score + Pb.score << "\n";
							fout.close();
							score = Pr.score + Pb.score;
							Sleep(100); break; }
						case 2: {sure = false; break; }
						}
					}
					if (arrow == 0) { arrow = 2; }
					if (arrow == 3) { arrow = 1; }
					Font PixFont;
					PixFont.loadFromFile("F77 Minecraft.ttf");
					if (ret) Sleep(50);
					if (Keyboard::isKeyPressed(Keyboard::Up)) { arrow -= 1; ret = true; Sleep(60); }
					if (Keyboard::isKeyPressed(Keyboard::Down)) {
						arrow += 1; ret = true; Sleep(60);
					}
					Text BigText("", PixFont, 80);
					BigText.setPosition(300, 100);
					BigText.setOutlineColor(Color::White);
					BigText.setFillColor(Color::White);
					BigText.setString(L"Вы уверены что хотите выйти?");
					window.draw(BigText);
					Text SmallText("", PixFont, 40);
					SmallText.setPosition(300, 200);
					SmallText.setOutlineColor(Color::White);
					SmallText.setFillColor(Color::White);
					SmallText.setString(L"(Ваш результат будет внесён в таблицу)");
					window.draw(SmallText);

					if (arrow == 1)
					{
						Text PlayText("", PixFont, 120);
						PlayText.setPosition(300, 290);
						PlayText.setOutlineColor(Color::White);
						PlayText.setFillColor(Color::White);
						PlayText.setString(L"Да");
						window.draw(PlayText);
					}
					else
					{
						Text PlayText("", PixFont, 100);
						PlayText.setPosition(300, 300);
						PlayText.setOutlineColor(Color::White);
						PlayText.setFillColor(Color::White);
						PlayText.setString(L"Да");
						window.draw(PlayText);
					}


					if (arrow == 2)
					{
						Text TopText("", PixFont, 120);
						TopText.setPosition(300, 440);
						TopText.setOutlineColor(Color::White);
						TopText.setFillColor(Color::White);
						TopText.setString(L"Нет");
						window.draw(TopText);

					}
					else
					{
						Text TopText("", PixFont, 100);
						TopText.setPosition(300, 450);
						TopText.setOutlineColor(Color::White);
						TopText.setFillColor(Color::White);
						TopText.setString(L"Нет");
						window.draw(TopText);
					}
					window.display();
				}
				if (game_over) continue;
				int CD1 = 2000000;
				int CD2 = 750000;
				int CD4 = 5000000;
				if ((Enemies.size() == 0)&&(pause))
				{
					if (Pr.HP <= 60) Pr.HP += 30;
					if (Pb.HP <= 60) Pb.HP += 30;
					EnemiesCouldDown.restart();
					pause = false;
					//Enemies.push_back(Enemy(Enemy1sprite, 450.0, 100.0, 1));
					//Enemies.push_back(Enemy(Enemy1sprite, 1450.0, 100.0, 1));
					//Enemies.push_back(Enemy(Enemy1sprite, 950.0, 100.0, 1));
					//Enemies.push_back(Enemy(Enemy2sprite, 620.0, 200.0, 2));
					//Enemies.push_back(Enemy(Enemy2sprite, 1300.0, 200.0, 2));
					//Enemies.push_back(Enemy(Enemy3sprite, 860.0, 10.0, 3));
					//Enemies.push_back(Enemy(Enemy4sprite, 960.0, 0, 4));
				}
				if ((Enemies.size() == 0) && (EnemiesCouldDown.getElapsedTime().asSeconds() > 3))
				{
					EnemiesCouldDown.restart();
					wave++;
					if (wave == 6)
					{
						wave = 1;
						CD1 * 0.8;
						CD2 * 0.8;
						CD4 * 0.8;
					}
					switch (wave)
					{
					case 1:
					{
						Enemies.push_back(Enemy(Enemy1sprite, 450.0, 100.0, 1));
						Enemies.push_back(Enemy(Enemy1sprite, 1400.0, 100.0, 1));
						Enemies.push_back(Enemy(Enemy2sprite, 1350.0, 200.0, 2));
						Enemies.push_back(Enemy(Enemy2sprite, 550.0, 300.0, 2));
						Enemies.push_back(Enemy(Enemy3sprite, 460.0, 10.0, 3));
						Enemies.push_back(Enemy(Enemy3sprite, 1060.0, 10.0, 3));
						break;
					}
					case 2:
					{
						Enemies.push_back(Enemy(Enemy3sprite, 460.0, 10.0, 3));
						Enemies.push_back(Enemy(Enemy3sprite, 1060.0, 10.0, 3));
						Enemies.push_back(Enemy(Enemy1sprite, 960.0, 400.0, 1));
						Enemies.push_back(Enemy(Enemy2sprite, 1350.0, 100.0, 2));
						Enemies.push_back(Enemy(Enemy2sprite, 550.0, 100.0, 2));
						Enemies.push_back(Enemy(Enemy2sprite, 1150.0, 250.0, 2));
						Enemies.push_back(Enemy(Enemy2sprite, 750.0, 250.0, 2));
						break;
					}
					case 3:
					{
						Enemies.push_back(Enemy(Enemy3sprite, 960.0, 10.0, 3));
						Enemies.push_back(Enemy(Enemy4sprite, 960.0, 20, 4));
						Enemies.push_back(Enemy(Enemy2sprite, 1150.0, 250.0, 2));
						Enemies.push_back(Enemy(Enemy2sprite, 750.0, 250.0, 2));
						Enemies.push_back(Enemy(Enemy1sprite, 450.0, 100.0, 1));
						Enemies.push_back(Enemy(Enemy1sprite, 1400.0, 100.0, 1));
						break;

					}
					case 4: 
					{
						Enemies.push_back(Enemy(Enemy1sprite, 450.0, 100.0, 1));
						Enemies.push_back(Enemy(Enemy1sprite, 1450.0, 100.0, 1)); 
						Enemies.push_back(Enemy(Enemy1sprite, 750.0, 200.0, 1));
						Enemies.push_back(Enemy(Enemy1sprite, 1150.0, 200.0, 1));
						Enemies.push_back(Enemy(Enemy1sprite, 960.0, 300.0, 1));
						Enemies.push_back(Enemy(Enemy3sprite, 500.0, 10.0, 3));
						Enemies.push_back(Enemy(Enemy3sprite, 800.0, 10.0, 3));
						Enemies.push_back(Enemy(Enemy3sprite, 1100.0, 10.0, 3));
						Enemies.push_back(Enemy(Enemy3sprite, 1400.0, 10.0, 3));
						break;
					}
					case 5:
					{
						Enemies.push_back(Enemy(Enemy4sprite, 760.0, -20, 4));
						Enemies.push_back(Enemy(Enemy4sprite, 1150.0, -20, 4));
						Enemies.push_back(Enemy(Enemy2sprite, 1150.0, 250.0, 2));
						Enemies.push_back(Enemy(Enemy2sprite, 750.0, 250.0, 2));
						Enemies.push_back(Enemy(Enemy1sprite, 850.0, 400.0, 1));
						Enemies.push_back(Enemy(Enemy1sprite, 1050.0, 400.0, 1));
						Enemies.push_back(Enemy(Enemy1sprite, 960.0, 200.0, 1));
						break;

					}
					}

				}

				
				if (stop) clock.restart();
				float time = clock.getElapsedTime().asMicroseconds();
				clock.restart(); 
				time = time / 800;
				Red_CoulDown = Red_CouldDownClock.getElapsedTime().asMicroseconds();
				Blue_CoulDown = Blue_CouldDownClock.getElapsedTime().asMicroseconds();

				//if (frame_clock.getElapsedTime().asMicroseconds() >= 1000000)
				//{
				//	printf("%d\n", frames);
				//	frames = 0;
				//frame_clock.restart();
				//}

				String text;

				Event event;
				while (window.pollEvent(event))
				{
					if (event.type == Event::Closed)
						window.close();
				}

				if (Keyboard::isKeyPressed(Keyboard::A)) {
					Pr.dirX = -1; Pr.speed = 0.3;
				}
				if (Pr.HP <= 100)if (Keyboard::isKeyPressed(Keyboard::D)) {
					Pr.dirX = 1; Pr.speed = 0.3;//направление вправо, см выше
				}
				 if (Pr.HP <= 100)if (Keyboard::isKeyPressed(Keyboard::W)) {
					Pr.dirY = 1; Pr.speed = 0.3;//направление вниз, см выш
				}
				if (Pr.HP <= 100)if (Keyboard::isKeyPressed(Keyboard::S)) { //если нажата клавиша стрелка влево или англ буква А
					Pr.dirY = -1; Pr.speed = 0.3;//направление вверх, см выш
				}
				if (Pr.HP <= 100) if (Keyboard::isKeyPressed(Keyboard::LShift))
				{
					Pr.speed *= 1.8;
				}
				if ((Keyboard::isKeyPressed(Keyboard::Escape))) { 
					sure = true; Sleep(100); 
				}
				if (Pb.HP <= 100)if (Keyboard::isKeyPressed(Keyboard::Left)) {
					Pb.dirX = -1; Pb.speed = 0.3;
				}
				if (Pb.HP <= 100)if (Keyboard::isKeyPressed(Keyboard::Right)) {
					Pb.dirX = 1; Pb.speed = 0.3;
				}
				if (Pb.HP <= 100)if (Keyboard::isKeyPressed(Keyboard::Up)) {
					Pb.dirY = 1; Pb.speed = 0.3;
				}
				if (Pb.HP <= 100)if (Keyboard::isKeyPressed(Keyboard::Down)) { 
					Pb.dirY = -1; Pb.speed = 0.3;
				}
				if (Pb.HP <= 100)if (Keyboard::isKeyPressed(Keyboard::Enter))
				{
					Pb.speed *= 1.8;
					isPassEnter = false;
				}
				if (Pr.HP <= 100)if ((Keyboard::isKeyPressed(Keyboard::Space)) && (Red_CoulDown > 100000))
				{
					Red_CouldDownClock.restart();
					if (Red_Bullet_Flag)
					{
						Red_bullets.push_back(Bullet(Bulsprite, Pr.x + 15, Pr.y + 20, 0, 1, 0, -1));
						Red_Bullet_Flag = false;
					}
					else
					{
						Red_bullets.push_back(Bullet(Bulsprite, Pr.x + 60, Pr.y + 20, 0, 1, 0, -1));
						Red_Bullet_Flag = true;
					}

				}
				if (Pb.HP <= 100)if ((Keyboard::isKeyPressed(Keyboard::Numpad0)) && (Blue_CoulDown > 100000))
				{
					Blue_CouldDownClock.restart();
					if (Blue_Bullet_Flag)
					{
						Blue_Bullet_Flag = false;
						Blue_bullets.push_back(Bullet(Bulsprite, Pb.x + 15, Pb.y + 20, 0, 2, 0, -1));
					}
					else
					{
						Blue_Bullet_Flag = true;
						Blue_bullets.push_back(Bullet(Bulsprite, Pb.x + 60, Pb.y + 20, 0, 2, 0, -1));
					}
				}
				Pb.update(time);
				Pr.update(time);
				Sp.update(time);

				if (Enemies.size() > 0) {
					//int ThirdType = 0;
					for (int i = 0; i != Enemies.size(); ++i)
					{

						//if (Enemies[i].type == 3) ThirdType++;
						bool dead = false;
						auto iter = Enemies.begin();
						Enemies[i].update(time, Pr, Pb);
						Enemies[i].sprite.setColor(Color(255, 255, 255, 255));
						if ((Enemies[i].HP < 1000) && (Enemies[i].type == 3) && (abs(Enemies[i].x - Enemies[i].Targ_x) < 10) && (abs(Enemies[i].y - Enemies[i].Targ_y) < 10))
						{
							if (abs(Enemies[i].Targ_x - Enemies[i].BlueX) < 100) { Pb.HP -= 30; RHPCD.restart(); }
							else { Pr.HP -= 30; BHPCD.restart();}
							Enemies[i].HP = 0;
						}
						if (Enemies[i].HP <= 0) Enemies[i].HP = 11000;
						if (Enemies[i].HP >= 10000) { Enemies[i].HP += 250;  Enemies[i].sprite.setTextureRect(IntRect(0, 0, 25, 25)); }
						if (Enemies[i].HP >= 10700) { Enemies[i].sprite.setTextureRect(IntRect(0, 25, 25, 25)); Enemies[i].sprite.setScale(4.0f, 4.0f); if (Enemies[i].type == 4) Enemies[i].sprite.setScale(7.0f, 7.0f); }
						if (Enemies[i].HP >= 11500) { Enemies[i].sprite.setTextureRect(IntRect(0, 50, 25, 25)); Enemies[i].sprite.setScale(4.0f, 4.0f); if (Enemies[i].type == 4) Enemies[i].sprite.setScale(7.0f, 7.0f); }
						if (Enemies[i].HP >= 12000) { Enemies[i].sprite.setTextureRect(IntRect(0, 75, 25, 25)); Enemies[i].sprite.setScale(4.0f, 4.0f); if (Enemies[i].type == 4) Enemies[i].sprite.setScale(7.0f, 7.0f); }
						if (Enemies[i].HP >= 13000) { Enemies[i].sprite.setTextureRect(IntRect(0, 100, 25, 25)); Enemies[i].sprite.setScale(4.0f, 4.0f); if (Enemies[i].type == 4) Enemies[i].sprite.setScale(7.0f, 7.0f); }
						if (Enemies[i].HP >= 15000) { Enemies[i].sprite.setTextureRect(IntRect(0, 125, 25, 25)); Enemies[i].sprite.setScale(4.0f, 4.0f);  if (Enemies[i].type == 4) Enemies[i].sprite.setScale(7.0f, 7.0f); }
						if (Enemies[i].HP >= 15000) { Enemies.erase(iter + i); i--; dead = true; }
						if (dead) continue;
						float TRGX, TRGY;

						if (sqrt(pow((Enemies[i].x - Pr.x), 2) + pow((Enemies[i].y - Pr.y), 2)) > sqrt(pow((Enemies[i].x - Pb.x), 2) + pow((Enemies[i].y - Pb.y), 2))) { TRGX = Pb.x + 8; TRGY = Pb.y + 16; }
						else { TRGX = Pr.x + 8; TRGY = Pr.y + 16; }

						switch (Enemies[i].type)
						{
						case 1:
						{
							if (Enemies[i].CouldDownClock.getElapsedTime().asMicroseconds() >= CD1)
							{
								Enemy_bullets.push_back(Bullet(Bulsprite1, Enemies[i].x + 40, Enemies[i].y + 50, 1, 0, TRGX+20, TRGY+20));
								Enemies[i].CouldDownClock.restart();
							}
							break;
						}
						case 2:
						{
							if (Enemies[i].CouldDownClock.getElapsedTime().asMicroseconds() >= CD2)
							{
								Enemy_bullets.push_back(Bullet(Bulsprite, Enemies[i].x + 40, Enemies[i].y + 50, 2, 0, Enemies[i].x, 1080));
								Enemies[i].CouldDownClock.restart();
							}
							break;
						}
						case 4:
						{
							if (Enemies[i].CouldDownClock.getElapsedTime().asMicroseconds() >= CD4)
							{
								Enemy_bullets.push_back(Bullet(Bulsprite, Enemies[i].x + 100, Enemies[i].y + 100, 4, 0, Enemies[i].x, 1080));
								Enemies[i].CouldDownClock.restart();
							}
							break;
						}
						}

					}
					//if (ThirdType == 0) Enemies.push_back(Enemy(Enemy3sprite, 860.0, 10.0, 3));
				}
				if (Red_bullets.size() > 0) {
					bool destr;
					for (int i = 0; i != Red_bullets.size(); ++i)
					{
						destr = false;
						auto iter = Red_bullets.begin();
						Red_bullets[i].update(time);
						if (Red_bullets[i].y <= -200) {
							Red_bullets.erase(iter + i); i--; destr = true;
						}
						if (destr) continue;
						for (int j = 0; j != Enemies.size(); ++j)
						{
							if (destr) break;
							if (Enemies[j].alive) for (int k = 0; k != Enemies[j].HitBox.size(); ++k)
							{
								if (destr) break;
								if ((abs(Enemies[j].x + Enemies[j].HitBox[k].X - Red_bullets[i].x + 1) < 20) && (abs(Enemies[j].y + Enemies[j].HitBox[k].Y - Red_bullets[i].y + 3) < 60))
								{
									switch (Red_bullets[i].type)
									{
									case 0:
									{
										Enemies[j].HP -= 25;
										Red_bullets.erase(iter + i); i--;
										if (Enemies[j].HP <= 0) 
										{ 
											if (Enemies[j].alive) switch (Enemies[j].type)
											{
											case(1): Pr.score += 10; break;
											case(2): Pr.score += 15; break;
											case(3): Pr.score += 5; break;
											case(4): Pr.score += 25; break;
											case(5): Pr.score += 10; break;
											case(6): Pr.score += 40; break;
											}
											Enemies[j].sprite.setTextureRect(IntRect(0, 0, 30, 30)); 
											Enemies[j].alive = false; 
										}
										else if (Enemies[j].HP < 10000) Enemies[j].sprite.setColor(Color(255, 10, 10, 255));
										destr = true;
										break;
									}
									}
								}
							}
						}
					}
				}
				if (Blue_bullets.size() > 0) {
					bool destr;
					for (int i = 0; i != Blue_bullets.size(); ++i)
					{
						destr = false;
						auto iter = Blue_bullets.begin();
						Blue_bullets[i].update(time);
						if (Blue_bullets[i].y <= -10) { Blue_bullets.erase(iter + i); i--; destr = true; }
						if (destr) continue;
						for (int j = 0; j != Enemies.size(); ++j)
						{
							if (destr) break;
							if (Enemies[j].alive) for (int k = 0; k != Enemies[j].HitBox.size(); ++k)
							{
								if (destr) break;
								if ((abs(Enemies[j].x + Enemies[j].HitBox[k].X - Blue_bullets[i].x + 1) < 30) && (abs(Enemies[j].y + Enemies[j].HitBox[k].Y - Blue_bullets[i].y + 3) < 60))
								{
									switch (Blue_bullets[i].type)
									{
									case 0:
									{
										Enemies[j].HP -= 25;
										Blue_bullets.erase(iter + i); i--;
										if (Enemies[j].HP <= 0)
										{
											if (Enemies[j].alive) switch (Enemies[j].type)
											{
											case(1): Pb.score += 10; break;
											case(2): Pb.score += 15; break;
											case(3): Pb.score += 5; break;
											case(4): Pb.score += 25; break;
											case(5): Pb.score += 10; break;
											case(6): Pb.score += 40; break;
											}
											Enemies[j].sprite.setTextureRect(IntRect(0, 0, 30, 30));
											Enemies[j].alive = false;
										}
										else if (Enemies[j].HP < 10000) Enemies[j].sprite.setColor(Color(255, 10, 10, 255));
										destr = true;
										break;
									}
									}
								}
							}
						}
					}
				}
				if (Enemy_bullets.size() > 0)
				{
					bool destr;
					for (int i = 0; i != Enemy_bullets.size(); ++i)
					{
						destr = false;
						auto iter = Enemy_bullets.begin();
						Enemy_bullets[i].update(time);
						if ((Enemy_bullets[i].type == 4) && (Enemy_bullets[i].y >= 400))
						{

							Enemy_bullets.push_back(Bullet(Bulsprite1, Enemy_bullets[i].x, Enemy_bullets[i].y, 1, 0, Enemy_bullets[i].x - 30, Enemy_bullets[i].y));
							Enemy_bullets.push_back(Bullet(Bulsprite1, Enemy_bullets[i].x, Enemy_bullets[i].y, 1, 0, Enemy_bullets[i].x - 20, Enemy_bullets[i].y + 10));
							Enemy_bullets.push_back(Bullet(Bulsprite1, Enemy_bullets[i].x, Enemy_bullets[i].y, 1, 0, Enemy_bullets[i].x - 1, Enemy_bullets[i].y + 2));
							Enemy_bullets.push_back(Bullet(Bulsprite1, Enemy_bullets[i].x, Enemy_bullets[i].y, 1, 0, Enemy_bullets[i].x, Enemy_bullets[i].y + 3));
							Enemy_bullets.push_back(Bullet(Bulsprite1, Enemy_bullets[i].x, Enemy_bullets[i].y, 1, 0, Enemy_bullets[i].x + 10, Enemy_bullets[i].y + 20));
							Enemy_bullets.push_back(Bullet(Bulsprite1, Enemy_bullets[i].x, Enemy_bullets[i].y, 1, 0, Enemy_bullets[i].x + 20, Enemy_bullets[i].y + 10));
							Enemy_bullets.push_back(Bullet(Bulsprite1, Enemy_bullets[i].x, Enemy_bullets[i].y, 1, 0, Enemy_bullets[i].x + 30, Enemy_bullets[i].y));
							iter = Enemy_bullets.begin();
							Enemy_bullets.erase(iter + i); i--; destr = true;
						}
						if (destr) continue;
						if (Enemy_bullets[i].y >= 1100) { Enemy_bullets.erase(iter + i); i--; destr = true; }
						if (destr) continue;
						if (Enemy_bullets[i].y <= -10) { Enemy_bullets.erase(iter + i); i--; destr = true; }
						if (destr) continue;
						if (Enemy_bullets[i].x <= 420) { Enemy_bullets.erase(iter + i); i--; destr = true; }
						if (destr) continue;
						if (Enemy_bullets[i].x >= 1500) { Enemy_bullets.erase(iter + i); i--; destr = true; }
						if (destr) continue;


						for (int k = 0; k != Pb.HitBox.size(); ++k)
						{
							if (destr) break;
							if ((abs(Pb.x + Pb.HitBox[k].X - Enemy_bullets[i].x + 1) < 40) && (abs(Pb.y + Pb.HitBox[k].Y - Enemy_bullets[i].y + 3) < 60))
							{
								switch (Enemy_bullets[i].type)
								{
								case 1:
								{
									Pb.HP -= 10;
									Enemy_bullets.erase(iter + i); i--;
									if (Pb.HP <= 0) {/*//Pb.sprite.setTexture(Enemi) Pb.sprite.setTextureRect(IntRect(0, 0, 30, 30));*/ }
									else if (Pb.HP < 10000) Pb.sprite.setColor(Color(255, 10, 10, 255));
									destr = true;
									BHPCD.restart();
									break;
								}
								case 2:
								{
									Pb.HP -= 15;
									Enemy_bullets.erase(iter + i); i--;
									//Pb.sprite.setTextureRect(IntRect(0, 0, 30, 30));
									if (Pb.HP < 10000) Pb.sprite.setColor(Color(255, 10, 10, 255));
									destr = true;
									BHPCD.restart();
									break;
								}
								}
							}
						}
						for (int k = 0; k != Pr.HitBox.size(); ++k)
						{
							if (destr) break;
							if ((abs(Pr.x + Pr.HitBox[k].X - Enemy_bullets[i].x + 1) < 20) && (abs(Pr.y + Pr.HitBox[k].Y - Enemy_bullets[i].y + 3) < 40))
							{
								switch (Enemy_bullets[i].type)
								{
								case 1:
								{
									Pr.HP -= 20;
									Enemy_bullets.erase(iter + i); i--;
									if (Pr.HP <= 0) {}//Pr.sprite.setTextureRect(IntRect(0, 0, 30, 30));
									else if (Pr.HP < 10000) Pr.sprite.setColor(Color(255, 10, 10, 255));
									destr = true;
									RHPCD.restart();
									break;
								}
								case 2:
								{
									Pr.HP -= 35;
									Enemy_bullets.erase(iter + i); i--;
									if (Pr.HP <= 0) {}//Pr.sprite.setTextureRect(IntRect(0, 0, 30, 30));
									else if (Pr.HP < 10000) Pr.sprite.setColor(Color(255, 10, 10, 255));
									destr = true;
									RHPCD.restart();
									break;
								}
								}
							}
						}

					}
				}




				window.clear();
				window.draw(Sp.sprite1);
				window.draw(Sp.sprite2);
				window.draw(Pr.sprite);
				window.draw(Pb.sprite);
				if (Red_bullets.size() > 0)
				{
					for (int i = 0; i != Red_bullets.size(); ++i)
					{
						window.draw(Red_bullets[i].sprite);
					}
				}
				if (Blue_bullets.size() > 0)
				{
					for (int i = 0; i != Blue_bullets.size(); ++i)
					{
						window.draw(Blue_bullets[i].sprite);
					}
				} //bul draw
				if (Enemy_bullets.size() > 0)
				{
					for (int i = 0; i != Enemy_bullets.size(); ++i)
					{
						window.draw(Enemy_bullets[i].sprite);
					}
				}
				if (Enemies.size() > 0)
				{
					for (int i = 0; i != Enemies.size(); ++i)
					{
						window.draw(Enemies[i].sprite);
					}
				} //bul draw




				Font PixFont;
				PixFont.loadFromFile("F77 Minecraft.ttf");
				
				Text RNameText("", PixFont, red_size);
				RNameText.setPosition(5, 5);
				RNameText.setOutlineColor(Color::Red);
				RNameText.setFillColor(Color::Red);
				RNameText.setString(RedName);
				window.draw(RNameText);

				Text BNameText("", PixFont, blue_size);
				BNameText.setPosition(1505, 5);
				BNameText.setOutlineColor(Color::Blue);
				BNameText.setFillColor(Color::Blue);
				BNameText.setString(BlueName);
				window.draw(BNameText);

				Text ScoreText("", PixFont, 40);
				ScoreText.setPosition(5, 140);
				ScoreText.setOutlineColor(Color::Red);
				ScoreText.setFillColor(Color::Red);
				ScoreText.setString(L"Очки:");
				window.draw(ScoreText);

				
				ScoreText.setPosition(1505, 140);
				ScoreText.setOutlineColor(Color::Blue);
				ScoreText.setFillColor(Color::Blue);
				ScoreText.setString(L"Очки:");
				window.draw(ScoreText);

				ScoreText.setPosition(5, 200);
				ScoreText.setOutlineColor(Color::Red);
				ScoreText.setFillColor(Color::Red);
				ScoreText.setString(std::to_string(Pr.score));
				window.draw(ScoreText);

				ScoreText.setPosition(1505, 200);
				ScoreText.setOutlineColor(Color::Blue);
				ScoreText.setFillColor(Color::Blue);
				ScoreText.setString(std::to_string(Pb.score));
				window.draw(ScoreText);


				ScoreText.setPosition(1505, 260);
				ScoreText.setOutlineColor(Color::Blue);
				ScoreText.setFillColor(Color::Blue);
				ScoreText.setString(L"Здоровье:");
				window.draw(ScoreText);

				ScoreText.setPosition(5, 260);
				ScoreText.setOutlineColor(Color::Red);
				ScoreText.setFillColor(Color::Red);
				ScoreText.setString(L"Здоровье:");
				window.draw(ScoreText);

				ScoreText.setPosition(5, 200);
				ScoreText.setOutlineColor(Color::Red);
				ScoreText.setFillColor(Color::Red);
				ScoreText.setString(std::to_string(Pr.score));
				window.draw(ScoreText);

				if((Pr.HP>=0)&&(Pr.HP <= 100)) RedHbarSp.setTextureRect(IntRect(0, 0, Pr.HP, 15));
				RedHbarSp.setPosition(5, 320);
				if ((Pr.HP >= 0) && (Pr.HP <= 100)) window.draw(RedHbarSp);

				if ((Pb.HP >= 0) && (Pb.HP <= 100)) BlueHbarSp.setTextureRect(IntRect(0, 0, Pb.HP, 15));
				BlueHbarSp.setPosition(1505, 320);
				if ((Pb.HP >= 0) && (Pb.HP <= 100)) window.draw(BlueHbarSp);

				HbarSp.setPosition(1505, 320);
				window.draw(HbarSp);

				HbarSp.setPosition(5, 320);
				window.draw(HbarSp);
			
				
				/*if (event.type == sf::Event::TextEntered && isPassEnter)
				{
					// отсекаем не ASCII символы
					if (event.text.unicode < 128)
					{
						nickname += static_cast<char>(event.text.unicode);
						BlueText.setString(nickname);
					}
				}*/
				//window.draw(BlueText);
				//printf("%f", CoulDown);
				//system("CLS");

				window.display();
				
				

				if ((Pr.HP <= 95) && (RHPCD.getElapsedTime().asSeconds() > 5) && (Pr.HP > 0))
				{
					Pr.HP += 5;
					RHPCD.restart();
				}
				if ((Pb.HP <= 95) && (BHPCD.getElapsedTime().asSeconds() > 5) && (Pb.HP > 0))
				{
					Pb.HP += 5;
					BHPCD.restart();
				}

				if ((Pr.HP == 99999) && (Pb.HP == 99999)) 
				{
					game_over = true; 
					play = false;  
					std::ofstream fout;
					fout.open(path, std::ofstream::app);
					fout << RedName << "\n";
					fout << BlueName << "\n";
					fout << Pr.score + Pb.score << "\n";
					score = Pr.score + Pb.score;
					fout.close();
				}
				//frames++;
			}
			clock.restart();
			Red_CouldDownClock.restart();
			Blue_CouldDownClock.restart();
		}
	}
	
	window.close();
	return(0);
}
#include"iostream"

using namespace std;

void funct(int **x, int *y, int z)
{
	z = x + y;
}

int main()
{
	int a = 5;
	int b = 12;
	int *pa=&a;
	int *pb=&b;
	int c=0;
	funct(&pa, pb, c);
	cout << c;
}

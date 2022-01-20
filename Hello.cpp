#include <iostream>

using namespace std;

int sub(int, int);

int main()
{
	cout << "Hello World!!!" << endl;
	sub(4,5);
	mult(3,4);
	divison(10,5);
}

int sub(int a, int b)
{
	int c = a-b;
	return c;
}

int mult(int a, int b)
{
	int c;
	c = a * b;
}

int divison (int a, int b)
{
	int c = a/b;
	return c;
}

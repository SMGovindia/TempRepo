#include <iostream>

using namespace std;

int sub(int, int);

int main()
{
	cout << "Hello World!!!" << endl;
	sub(4,5);
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

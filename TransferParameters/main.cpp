#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

void Exchange(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	Exchange(a, b);
	cout << a << "\t" << b << endl;
	exchange(a, b);
	cout << a << "\t" << b << endl;
}

void Exchange(int a, int b)
{
	int buffer = a;
	a = b;
	b = buffer;
}
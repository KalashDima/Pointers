#include<iostream>
using namespace std;

/*
1. By value;		//По значению
2. By pointer;		//По указателю
3. By reference;	//По ссылке
*/

void Exchange(int& a, int& b);

void main()
{
	setlocale(LC_ALL, "");
	int a = 2, b;
	cout << a << "\t" << b << endl;
	Exchange(a, b);
	cout << a << "\t" << b << endl;
}

void Exchange(int& a, int& b)
{
	int buffer = a;
	a = b;
	b = buffer;
}
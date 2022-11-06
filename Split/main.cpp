#include <iostream>
#include <iterator>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

//template <class T, std::size_t N>
//constexpr std::size_t size(const T(&array)[N]) noexcept {
//	return N;
//}

void FillRand(int* massiv);
void Print(int* massiv, int n);
void Distribution(int& massiv, int& even, int& am_even, int& odd, int& am_odd);
void Amount(int& massiv, int& am_even, int& am_odd);

void main() 
{
	setlocale(LC_ALL, "");

	int n = 10;
	int* massiv = new int[n];
	int* even;
	int* odd;
	int* am_even = 0;
	int* am_odd = 0;
	
	FillRand(massiv);
	Print(massiv, n);
	Amount(*massiv, *am_even, *am_odd);
	even = new int[*am_even];
	odd = new int[*am_odd];
	Distribution(*massiv, *even, *am_even, *odd, *am_odd);
	Print(even, *am_even);
	Print(odd, *am_odd);
}
void FillRand(int* massiv) 
{
	for (int i = 0; i < 10; i++)
	{
		massiv[i] = rand() % 100;
	}
}
void Print(int* massiv, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << massiv[i] << "\t";
	}
	cout << endl;
}
void Distribution(int* massiv, int* even, int* am_even, int* odd, int* am_odd)
{
	int next_1 = 0;
	int next_2 = 0;
	for (int i = 0; i < 10; i++)
	{
		if (massiv[i] % 2 == 0)
		{
			even[i] = massiv[i];
			next_1++;
		}
		else
		{
			odd[i] = massiv[i];
			next_2++;
		}
	}
}
void Amount(int* massiv, int* am_even, int* am_odd)
{
	for (int i = 0; i < 10; i++)
	{
		if (massiv[i] % 2 == 0)
			am_even++;
		else
			am_odd++;
	}
}
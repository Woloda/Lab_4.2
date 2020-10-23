// Lab_4.2.cpp
// Дорожовець Володимир 
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї.
// Варіант 0.6 
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double y, x, N, xp, xk, dx;

	cout << "xp = "; cin >> xp;
	cout << endl;
	cout << "xk = "; cin >> xk;
	cout << endl;
	cout << "dx = "; cin >> dx;
	cout << endl;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x <= -1)
			N = 3 + sin(abs(x));
		else
			if (-1 < x && x <= 3)
				N = 2 * exp((x / 4) - 1);
			else
				if (x > 3)
					N = 7 - sqrt(2) * x * x * x;
				else;

		y = 5 * exp(3 * x) + N;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}

	cout << "---------------------------" << endl;

	cin.get();
	return 0;
}

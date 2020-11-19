// Lab_04_4.cpp
// < Кузів Назар >
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком з дисципліни
// Варіант 6

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double y, x, xp, xk, dx, R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -5)
			y = -3;
		else
			if (-5 < x && x <= -R)
				y = -3 + (3 / (-R + 5)) * (x + 5);
			else
				if (-R < x && x <= R)
					y = sqrt(pow(R, 2) - pow(x, 2));
				else
					if (R < x && x <= 8)
						y = R / (8 - R) * (x - R);
					else
						y = R;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;

}
#include <iostream>
#include <cmath>
using namespace std;
double h(const double a, const double b);
int main()
{
	double g, s;
	cout << "g= "; cin >> g;
	cout << "s= "; cin >> s;
	double c = (h(g + 1, s) + pow( h(g, s + 1),2)) / (1 + pow (h (g * g, s * s),3));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b)
{
	return a * a - b * b;
}

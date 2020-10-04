#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <cstdlib> 

using namespace std;

int main()
{
	double a, b, c, x1, x2;
	
	cout << "programa para resolver ecuaciones cuadraticas con la formula general \n";
	cout << "introduzca el coeficiente \"a\": ";
	cin >> a;
	cout << "introduzca el coeficiente \"b\": ";
	cin >> b;
	cout << "introduzca el coeficiente \"c\": ";
	cin >> c;
	
	
	x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout << "x1 = " << x1 << end1;
	cout << "x2 = " << x2 << end1;
	
	system("pause");
}

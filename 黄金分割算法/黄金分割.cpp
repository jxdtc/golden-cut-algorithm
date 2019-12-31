#include<iostream>
#include<cmath>
using namespace std;
double f (double x) {
	return (-2)*pow(x,3)+21*pow(x,2)-60*x+50;
}
int main()
{
	double a, b,x1,x2,f1,f2,i;
	cin >> a >> b;
	x1 = 0.382*(b - a) + a;
	x2 = 0.618*(b - a) + a;
	while (1) {

		f1 = f(x1);
		f2 = f(x2);
		cout << a << " " << b << " "<< f1 << " " << f2<< " " << x1 << " " << x2 << endl;

		if (f1 >= f2)
		{
			a = x1;
			x1 = x2;
			x2 = 0.618*(b - a) + a;
			f1 = f2;

		}
		else
		{
			b = x2;
			x2 = x1;
			x1 = 0.382*(b - a) + a;
			f2 = f1;

		}


		if ((b - a) <= 0.1)
			break;
	}
	cout << a << " " << b << " " << x1 << " " << x2 << endl;
	system("pause");
	return 0;
}
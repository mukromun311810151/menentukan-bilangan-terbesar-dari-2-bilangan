#include <iostreAm>
using namespace std;

int main ()
{
	int a, b;
	cout <<"masukkan bilangan A : ";
	cin >>a;
	cout <<"masukkan bilangan B : ";
	cin >>b;
	
	if (a<b)
	cout <<"B adalah bilangan terbesar";
	else if (a>b)
	cout <<"A adalah bilangan terbesar";
	else
	cout <<"kedua bilangan sama besar";
	
	return 0;
}

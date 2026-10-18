#include <iostream>
#include <cmath>
#include <clocale>
#include <sstream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int devam;
	double a,b,c,a2,b2,c2;
	cout<<"\nWelcome to hypotenuse calculator\n";
	dongu:
	cout<<"\nInsert first side length.";
	cin>>a;
	if(a<=0)
	{
		cout<<"Side length cannot be 0 or negative.";
		goto dongu;
	}
	ostringstream uzunluk;
	int karakter;
	
	uzunluk<<a;
	karakter = uzunluk.str().length();

	
	cout<<"\nInsert second side length.";
	wrongb:
	cin>>b;
	if(b<=0)
	{
		cout<<"Side length cannot be 0 or negative.";
		goto wrongb;
	}
	a2 = a*a;
	b2 = b*b;
	c2 = a2 + b2;
	c = sqrt(c2);
	cout<<"\n1.Side Length="<<a<<"  2.Side Length="<<b;
	cout<<"\n\nHypotenuse length="<<c<<"\n\n";
	cout <<string(karakter, ' ')<< "  |\\\n";
    cout <<string(karakter, ' ')<< "  |  \\\n";
    cout <<string(karakter, ' ')<< "  |    \\\n";
    cout <<" "<<a<< " |      \\  "<<c<<"\n";
    cout <<string(karakter, ' ')<<"  |        \\\n";
    cout <<string(karakter, ' ')<< "  |          \\\n";
    cout <<string(karakter, ' ')<< "  |____________\\\n";
    cout <<string(karakter, ' ')<<"        "<<b<<"\n";
	wrongdevam:
	cout<<"Enter 1 for a new calculation, or 0 to exit";
	
	cin>>devam;
	if(devam !=0 && devam != 1)
	{
		goto wrongdevam;
	}
	if(devam==1)
	{
		goto dongu;
	}
	return 0;
}

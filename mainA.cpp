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
	cout<<"\nÜçgen hipotenüs hesaplayýcýya hoþgeldiniz\n";
	dongu:
	cout<<"\nBirinci kenarý gir.";
	cin>>a;
	if(a<=0)
	{
		cout<<"Kenar uzunluðu negatif veya 0 olamaz.";
		goto dongu;
	}
	ostringstream uzunluk;
	int karakter;
	
	uzunluk<<a;
	karakter = uzunluk.str().length();

	
	cout<<"\nÝkinci kenarý gir.";
	wrongb:
	cin>>b;
	if(b<=0)
	{
		cout<<"Kenar uzunluðu negatif veya 0 olamaz.";
		goto wrongb;
	}
	a2 = a*a;
	b2 = b*b;
	c2 = a2 + b2;
	c = sqrt(c2);
	cout<<"\n1.Kenar Uzunluðu="<<a<<"  2.Kenar Uzunluðu="<<b;
	cout<<"\n\nHipotenüs uzunluðu="<<c<<"\n\n";
	cout <<string(karakter, ' ')<< "  |\\\n";
    cout <<string(karakter, ' ')<< "  |  \\\n";
    cout <<string(karakter, ' ')<< "  |    \\\n";
    cout <<" "<<a<< " |      \\  "<<c<<"\n";
    cout <<string(karakter, ' ')<<"  |        \\\n";
    cout <<string(karakter, ' ')<< "  |          \\\n";
    cout <<string(karakter, ' ')<< "  |____________\\\n";
    cout <<string(karakter, ' ')<<"        "<<b<<"\n";
	wrongdevam:
	cout<<"Yeni hesaplama için 1, programý kapatmak için 0 giriniz.";
	
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

#include <iostream>
using namespace std;
int main ()
{
	int uczniowie; int wszystkiecukierki; int cukierkidlakazdego; int cukierkidlaJasia; 
	cout<<"Podaj liczbe wszystkich uczniow w klasie Jasia: ";cin>>uczniowie;
	int uczniowiebezJasia=uczniowie-1;
	cout<<"Podaj liczbe wszystkich cukierkow: ";cin>>wszystkiecukierki;
	if (uczniowiebezJasia>wszystkiecukierki)
	{
		cout<<"Jest wiecej uczniow, niz cukierkow! Nikt nie dostanie nawet po jednym.";
		return 0;
	}
	else
	{
	cukierkidlakazdego=wszystkiecukierki/uczniowiebezJasia;
	cukierkidlaJasia=wszystkiecukierki-(uczniowiebezJasia*cukierkidlakazdego);
	if (cukierkidlaJasia==1)
	{
		cout<<"Dla Jasia na wieczor zostal "<<cukierkidlaJasia<<" cukierek.";
	}
		else
		{
		cout<<"Dla Jasia na wieczor zostalo "<<cukierkidlaJasia<<" cukierkow.";
	}
}
	
return 0;
}

#include<iostream>
using namespace std ;
int main ()

{
	int sm,td3,j1,j2,j3,m1,m2,m3,d1,d2,d3, td , td1,td2; 
	cout<<" jam pertama:" ;
	cin>>j1 ;
	cout<<" menit pertama :" ;
	cin>>m1;
	cout<<"detik pertema :" ;
	cin>>d1;
	cout<<"jam kedua :" ;
	cin>>j2 ;
	cout<<"menit kedua :" ;
	cin>>m2;
	cout<<"detik kedua :" ;
	cin>>d2;
	td=(j1 * 3600) + (m1 * 60 )+ d1;
	td2=(j2 * 3600) + (m2 * 60 )+ d2;
	td3 = td2-td ;
	j3=td3/3600;
	sm=td3%3600;
	m3=sm/60;
	d3=sm%60;
	
	cout<<j3<<":"<<m3<<":"<<d3;
	     return 0;
}

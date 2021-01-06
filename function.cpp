//konversi jam menit detik ke total detik
//konversi total detik ke jam menit dan detik
//mencari perbedaan dari 2 buah jam (program billling telpon /warnet)
#include<iostream>
using namespace std ;

int konversiKeDetik(int jam, int menit, int detik) {
	return (jam* 3600) + (menit * 60) + detik;
}

int konversiDetikKeJam(int detik) {
	return detik/3600;
}

int konversiDetikKeMenit(int detik) {
	int sm, m;
	sm=detik%3600;
	return m=sm/60;
}


int main ()

{
	int sm,totalDetik,totalDetik2,selisihDetik,j1,j2,j3,m1,m2,m3,d1,d2,d3 ;
	
	cout<<"waktu awal" <<endl ; // proses untuk print sesuatu ke layar
	cout<<"jam pertama   :" ;
	cin>>j1 ; // menirma inputan dari user
	cout<<"menit pertama :" ;
	cin>>m1;
	cout<<"detik pertema :" ;
	cin>>d1;
	cout<<"=============================="<<endl;
	cout<<"waktu akhir" <<endl ;
	cout<<"jam kedua   :" ;
	cin>>j2 ;
	cout<<"menit kedua :" ;
	cin>>m2;
	cout<<"detik kedua :" ;
	cin>>d2;
	totalDetik=konversiKeDetik(j1,m1, d1);
	totalDetik2=konversiKeDetik(j2,m2,d2);
	selisihDetik = totalDetik2 - totalDetik;
	sm = selisihDetik % 3600; // % mod adalah sisa hasil bagi
	j3=konversiDetikKeJam(selisihDetik);
	m3=konversiDetikKeMenit(selisihDetik);
	d3=sm%60;
	
	cout<<"hasil perbandingan waktu awal dan akhir: "<<endl ;
	cout<<j3<<"jam : "<<m3<<"menit: "<<d3 <<"detik" ;
	return 0;
}

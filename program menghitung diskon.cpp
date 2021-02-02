#include <iostream>
using namespace std;
int main()
{
    int bayar,akhir,diskon,uang;
    cout<<"program menghitung Diskon"<<endl<<"Kasir "<<endl;
    cout<<endl;
    cout<<"Total pembayaran : ";
    cin>>bayar;
    if ((bayar>=0) && (bayar<25000)){
        diskon=bayar*0.10;
        akhir=bayar;
        cout<<endl;
	}
	  else if((bayar>=25000) && (bayar<50000)){
        diskon=bayar*0.10;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((bayar>=50000) && (bayar<75000)){
        diskon=bayar*0.12,5;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 12,5%"<<endl;
    } else if (bayar>=100000){
        diskon=bayar*0.15;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 15%"<<endl;
    }else {
        akhir=bayar;
    }
    cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang : ";
    cin>>uang;
    cout<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda : "<<kembalian;
    return 0;
}

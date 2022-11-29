#include <conio.h>
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

struct kasir
{
    char namabrg[15];
    long hrgasatuan;
    int jmlhbeli;
};
struct abc
{
    int nota, jumlhakhir,bayar;

    kasir * d;
};

abc t;

long total(int a)
{
    long th;
    th=t.d[a].hrgasatuan*t.d[a].jmlhbeli;
    return th;
}

long subtotal()
{
    long s;
    s=0;
    for (int i = 0; i < t.jumlhakhir; i++)
    {
        s=s+total(i);
    }
    return s;
    
}

long diskon()
{
    long d;
    if (subtotal()>180000)
    {
        d=subtotal()*0.15;
    }
    else if (subtotal()>70000)
    {
        d=subtotal()*0.05;
    }
    else
    {
        d=0;
    }
    return d;
    
}

long ppn()
{
    long p;
    p=0.1*subtotal();
    return p;
}

long grand()
{
    long g;
    g=subtotal()-diskon()+ppn();
    return g;
}

long kembalian()
   {long k;
    k=t.bayar-grand();
   return k;
}

void tampil(int u)
{
   cout<<setiosflags(ios::left)<<setw(15)<<t.d[u].namabrg;
   cout<<setw(1)<<"Rp. ";
   cout<<setiosflags(ios::right)<<setw(2)<<t.d[u].hrgasatuan;
   cout<<setw(5)<<t.d[u].jmlhbeli<<endl;
}

int main (void)
{
    cout<<"=============================================="<<endl;
    cout<<"           TOKO PERALATANO OLAHRAGA              "<<endl;
    cout<<"=============================================="<<endl;
    cout<<"No Nota : "; cin>>t.nota;
    cout<<endl;
    cout<<"Jumlah transaksi : ";cin>>t.jumlhakhir;
    t.d=new kasir[t.jumlhakhir];

    for(int i=0;i<t.jumlhakhir;i++)
    {
        cout<<endl;
        cout<<"Transaksi ke-"<<(i+1)<<endl;
        cout<<"Nama Barang  : "; cin>>t.d[i].namabrg;
        cout<<"Harga Satuan : "; cin>>t.d[i].hrgasatuan;
        cout<<"Jumlah Beli  : "; cin>>t.d[i].jmlhbeli;
    }

    system ("cls");

    cout<<"TOKO PERALATAN OLAHRAGA\n";
    cout<<"Jl. Bina Sarana No. 851-OK\n";
    cout<<"\n";
    cout<<"======================================"<<endl;
    cout<<"Nama          Harga      Jumlah       "<<endl;
    cout<<"Barang        satuan     Beli         "<<endl;
    cout<<"======================================"<<endl;

   for(int i=0;i<t.jumlhakhir;i++)
    {tampil(i);}
     cout<<"======================================"<<endl;
     cout<<"SubTotal    : Rp. "<<subtotal()<<endl;
     cout<<"Diskon      : Rp. "<<diskon()<<endl;
     cout<<"PPN 10%     : Rp. "<<ppn()<<endl;
     cout<<"Grand Total : Rp. "<<grand()<<endl;
     cout<<"Bayar       : Rp. "; cin>>t.bayar;
     cout<<"\n";
     cout<<"Kembalian   : Rp. "<<kembalian()<<endl;
     cout<<"\n";
     cout<<"Terimakasih Atas \n";
      cout<<"Kunjungan Anda \n";

   getch();


}

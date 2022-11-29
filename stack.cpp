#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct tumpukan //struktur tumpukan
{
    char data [20][100],max[20];
    int i,j;

}stack;

void masukkan() //masukkan untuk mengisi data
{
    stack.i++;
    cout <<"Data Mahasiswa : ";
    cin >>stack.max;
    strcpy (stack.data[stack.i], stack.max); //perintah menyalin data char panjang

}

void panggil() //panggil untuk mengambil data
{
    if (stack.i > 0)
    {
        cout <<"Data yang terambil : "<< stack.data[stack.i]<<endl;
        stack.i--; stack.j--;

    }
    else
    cout <<"Tidak ada data yang terambil"<<endl; //jika tidak ada data
    
}

void tampilkan(int n) // print untuk menampilkan data
{
    if (stack.j > 0)  //menampilkan isi data menggunakan perulangan for
    {
        for (int e  = n; e >= 1; e--)
        {
            cout <<stack.data[e] << endl;
        }
        
    }
    else
    cout <<"Tidak ada data yang tersimpan" <<endl; //jika tidak ada data
}

void hapus() // untuk menghapus data
{
    stack.j = 0; stack.i = 0 ;  // perintah untuk menghapus keseluruhan data
}

int main()
{
    int n, pilih;
    ayo:
    cout <<" Data Mahasiswa \n";
    stack.data[n];
    stack.i = 0;
    stack.j = 0;
    balik:  //fungsi goto

   cout << "\n1. masukkan data\n2. panggil data\n3. tampilkan data\n4. hapus data\n5. keluar\n";
   cout << "\npilih : ";  cin >> pilih;
   cout << "\n";

   if (pilih == 1)  //pemilihan pilihan menggunakan if
   {
    if (stack.j < n)
    {
        stack.j++; masukkan();
    }
    else
    {
        cout << " Tummpukan penuh"<<endl;
        getch();
    }
    goto balik;
    
   }
   else
   if (pilih == 2)
   {
        panggil(); getch(); goto balik;
   }
   else
   if (pilih == 3)
   {
        tampilkan(stack.i); getch(); goto balik;
   }
   else
   if (pilih == 4)
   {
        hapus(); getch(); goto balik;
   }
   else
   if (pilih == 5)
   {
        getch(); goto ayo;
   }
   else
   {
    cout <<"Data yang anda masukkan salah !!!";
    getch(); goto ayo;
   }
   
   
}

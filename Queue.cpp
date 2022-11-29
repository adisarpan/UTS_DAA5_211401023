//queue

#include <iostream>
#include <conio.h>   //menggunakan getch
#include <stdlib.h>  //menggunakan system("cls")
#define max 100

using namespace std;

int nomor[max ];
int head=-1;
int tail=-1;

bool IsEmpty()
{
    if (tail == -1)
    {
        return true;
    } else
    {
        return false;
    }
    
}

bool IsFull()
{
    if (tail == max - 1)
    {
        return true;
    }else
    {
        return false;
    }
    
    
}

void AntrianMasuk(int no)
{
    if (IsEmpty())
    {
        head = tail=0;

    }else
    {
        tail++;
    }
    nomor[tail]=no;
}

void Antriankeluar()
{
    if (IsEmpty())
    {
        cout <<"Antrian sudah kosong ! ";
        getch();
    }else
    {
        for (int a = head; a < tail; a++)
        {
            nomor[a]=nomor[a+1];
        }
        tail--;
        if (tail == -1)
        {
            head = -1;
        }
        
    }
    
    
}

void clear()
{
    head=tail=-1;
}

void view()
{
    if (IsEmpty())
    {
        cout <<"antrian kosong !";
    }else
    {
        system("cls");
        for (int a = head; a <= tail; a++)
        {
            cout <<"===================================";
            cout <<"\n >> no. antrian :["<< nomor [a]<< "]";
            cout <<"\n================================="<<endl;
        }
        
    }
    
}

int main()
{
    system ("color 79");
    int pilih, p=1, urut;
    do
    {
        system ("cls");
        cout <<"\n====== Antrian Data ======";
        cout <<"\n==========================";
        cout <<"\n|1. Tambah Antrian        ";
        cout <<"\n|2. Panggil Antrian       ";
        cout <<"\n|3. Lihat daftar Antrian  ";
        cout <<"\n|4. format                ";
        cout <<"\n|5. Exit                  ";
        cout <<"\n==========================";

        cout <<"\npilih :";
        cin >> pilih;
        cout <<"\n\n";

        if (pilih == 1)
        {
            if (IsFull())
            {
                cout <<"Antrian sudah penuh, mohon tunggu beberapa saat lagi";
            }else
            {
                urut=p;
                AntrianMasuk(urut);
                cout <<"=============================================="<<endl;
                cout <<"|             No. Antrian                     |"<<endl;
                cout <<"|               "<< p <<"                     |"<<endl;
                cout <<"----------------------------------------------|"<<endl;
                cout <<"|             Silahkan Mengantri              |"<<endl;
                cout <<"|             Menunggu "<< tail <<"Antrian    |"<<endl;
                cout <<"==============================================="<<endl;
                p++;

            }      
        }
    
      else if (pilih == 2)
     {
        cout <<"=============================="<<endl;
        cout <<"No. Antrian : [" << nomor [head] << "]";
        cout <<"\n============================"<<endl;
        Antriankeluar();
        cout <<"silahkan dipanggil !" <<endl;
     }
      else if (pilih == 3)
     {
        view();
     }
     else if (pilih == 4)
     {
        clear();
        cout <<"Antrian dikosongkan !";
     }
     else if (pilih == 5)
     {

     }
     else  
     {
        cout <<"Masukkan anda salah ! \n"<<endl;
     }
     getch();
    

    } while (pilih  = 5);
    
}
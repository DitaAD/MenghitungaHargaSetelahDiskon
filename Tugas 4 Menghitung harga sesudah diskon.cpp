#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
main()
{
                int kode, diskon;
   char jenis;
   long int harga, Hdiskon;
   cout<<"----------------------------------------------------------------\n";
   cout<<"--------------Menghitung Harga Setelah Didiskon-----------------\n";
   cout<<"----------------------------------------------------------------\n";

   cout<<"\n Inputkan Jenis Barang (A,B,C): ";
   cin>>jenis;

   cout<<"\n Inputkan Kode Barang: ";
   cin>>kode;

   cout<<"\n Inputkan Harga Barang: ";
   cin>>harga;

   switch (jenis)
   {case 'A':
                diskon=10;
      Hdiskon=harga-(0.10*harga);
      break;
   case 'B':
                diskon=15;
      Hdiskon=harga-(0.15*harga);
      break;
   case 'C':
                diskon=20;
      Hdiskon=harga-(0.20*harga);
      break;
   default:
                cout<<"inputan salah";
   }


   cout<<"\n ---------------------------HASIL-------------------------------\n";
   cout<<"\n Jenis Barang: "<<jenis; cout<<"\n Diskon dalam persen (%): "<<diskon; cout<<"\n Harga Setelah Diskon: "<<Hdiskon;
   getch();

}

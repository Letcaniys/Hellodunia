#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

string a; // inisiasi dua buah variabel
int b;

cout << "Masukkan Nama Anda : " ; // menampilkan output teks perintah inputan
cin >> a; //membaca inputan

cout << "Masukkan Nilai Anda (angka 1-100): " ; // menampilkan output teks perintah inputan
cin >> b; //membaca inputan

system("cls");//perintah untuk membersihkan console, fungsi dari headers stdlib.h
cout << "Halo "<<a<<" Nilai anda adalah : "<<b<< endl; //Menampilkan output inputan dari vairabel a & b
if (b>=60)
{
cout <<"Anda Lulus";
}else
{
cout <<"Anda tidak lulus";
}
//Baris percabangan if else untuk menguji nilai b
return 0;
}


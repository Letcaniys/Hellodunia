#include <stdio.h>
#include <iostream>
using namespace std;
main ()
{
string nama;
int usia;
int a = 20;
int b = 30;
cout << "\tApakah kamu jodohku?\n\n";
cout << "Hai, siapa nama kamu?" << endl;
cin >> nama;
cout << "Umur berapa kamu sekarang?" << endl;
cin >> usia;
if ( usia >= a && usia <= b )
{
cout << "\n\tTernyata selama ini kamu yang aku cari " << "! ^^";
cin >> nama;
}
else
{
cout << "\nMaaf " << nama << ",tapi sepertinya kita tidak jodoh >.<";
cin >> nama;
}
}

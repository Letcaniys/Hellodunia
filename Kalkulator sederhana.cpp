#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;
int main ()
{
    a:
    system("color 5e");
    cout << "===================================\n";
    cout << "  Kalkulator Sederhana By: Addly\n";
    cout << "===================================\n";
    
    int pil,lagi;
    float satu, dua;
    cout << "1. penjumlahan\n";
    cout << "2. pembagian\n";
    cout << "3. perkalian\n";
    cout << "4. pengurangan\n";
    cout << "masukan pilihan = "; cin >> pil;

    if (pil<=4 && pil>=1)
    {
        cout << endl;
        switch (pil)
        {
        case 1:
            cout << " Anda Memiilih Penjumlahan [ + ]" << "\n";break;

        case 2:
            cout << " Anda Memiilih Pembagian [ : ]" << "\n";break;

        case 3:
            cout << " Anda Memiilih Perkalian [ x ]" << "\n";break;

        case 4:
            cout << " Anda Memiilih Pengurangan [ - ]" << "\n";break;
        }
        cout << " angka pertama = "; cin >> satu;
        cout << " angka kedua = "; cin >> dua;
        switch (pil)
        {
        case 1:
            cout << " " << satu << " + " << dua << " = " << satu+dua << "\n";break;
        case 2:
            cout << " " << satu << " : " << dua << " = " << satu/dua << "\n";break;
        case 3:
            cout << " " << satu << " x " << dua << " = " << satu*dua << "\n";break;
        case 4:
            cout << " " << satu << " - " << dua << " = " << satu-dua << "\n";break;
        }
    }
    else
    {
        cout << "kesalahan silahkan ulangi !" << "\n\n\n";
    }
        cout << endl;
        cout << "pilih lagi = [1] / tidak = [2] ?? ";
        cin >> lagi;
        if (lagi == 1)
        {
            system ("cls");
            goto a;
        }
        else if(lagi == 2)
        {
            system ("cls");
        }
}

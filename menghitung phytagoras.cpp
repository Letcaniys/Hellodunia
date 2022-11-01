#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int cari;
    float a,b,c;
    cout << "Pilih sisi yang akan dicari : " << endl;
    cout << "1. a = sisi tegak " << endl;
    cout << "2. b = sisi datar " << endl;
    cout << "3. c = sisi miring" << endl << endl;;
    cout << "                ___     " << endl;
    cout << "      3[c] ____|   |    " << endl;
    cout << "       ___|        |    " << endl;
    cout << "   ___|            | 1[a]  " << endl;
    cout << "  |________________|    " << endl;
    cout << "        2[b]            " << endl;
    cout << "Masukan Nomornya : "; cin >> cari;

    if(cari==1){
        cout << "masukan sisi 2 : "; cin >> b;
        cout << "masukan sisi 3 : "; cin >> c;
        a=sqrt(pow(c,2)-pow(b,2));
        cout << "hasilnya : " << a << endl;
    }
    else if(cari==2){
        cout << "masukan sisi 1 : "; cin >> a;
        cout << "masukan sisi 3 : "; cin >> c;
        b=sqrt(pow(c,2)-pow(a,2));
        cout << "hasilnya : " << b << endl;
    }
    else if(cari==3){
        cout << "masukan sisi 1 : "; cin >> a;
        cout << "masukan sisi 2 : "; cin >> b;
        c=sqrt(pow(b,2)+pow(a,2));
        cout << "hasilnya : " << c << endl;
    }
    else{
        cout << "masukan keyword dengan benar !" << endl;
    }
    return 0;
}
 
 

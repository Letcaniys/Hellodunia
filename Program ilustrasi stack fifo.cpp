#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define MAX 10 // maksimal tumpukan
using namespace std;

int top=4; //sengaja dikasih 4, karena data sudah pertama dimasukan dalam array/stack paad deklarasi dibawah
string Stack[MAX]={"Matematika","Fisika","Biologi","Kimia","Bahasa Indonesia"}; // deklarasi

void push(){
    if(top == MAX-1){ // tampilkan jika nilai top sama dengan MAX=10-1
        cout << ">> Isi KOTAK sudah Penuh !" << endl;
    }
    else{ // jika top tidak sama dengan MAX=10-1 maka tampilkan di bawah
        top++; // tambahkan agar setiap perulangan do while, angka top bertambah
        cout << ">> Masukan Nama Buku : ";
        cin >> Stack[top];
        cout << "Buku [" << Stack[top] << "] Telah Ditambah dalam KOTAK! " << endl;
    }
}
void pop(){
    if(top == -1){ // tampilkan jika nilai top sama dengan -1 / nilai asli top nya
        cout << ">> Isi KOTAK sudah Kosong !" << endl;
    }
    else{
        cout << "\nBuku Pelajaran [" << Stack[top] << "' dalam KOTAK telah Diambil !" << endl;
        Stack[top--]; // kurangi nilai top pada stack agar terhapus
    }
}
int clearr(){
    return top = -1;
}
void Print(){
    if (top == -1) {
		cout << "          KOTAK : ";
        cout << "\n===========================" << endl;
        cout << "||        KOSONG !       ||"
             << "\n===========================" << endl;
	}
	else {
        cout << "          KOTAK : ";
        cout << "\n===========================" << endl;
		for (int i = top; i >= 0; i--){
			cout << "||  >>> " << Stack[i] << endl;
		}
		cout << "===========================" << endl;
	}
}
int main()
{
    int choose;
    do {
        Print();
        cout << "\n1. Tumpuk Buku"
             << "\n2. Ambil Buku"
             << "\n3. Hapus Semua"
             << "\n4. Keluar"
             << "\n\n>> Choose : "; cin >> choose;
        switch (choose){
            case 1:
                push();getch();
                break;
            case 2:
                pop();getch();
                break;
            case 3:
                clearr();
                cout << "\nClear Succes" << endl;
                getch();
                break;
            default:
                cout << "Salah !" << endl;
                break;
        }
        system("cls");
    }while(choose !=4);
}

#include <iostream>
using namespace std;
int main(){
	int tahun;
	
	cout<<"Program C++ Menghitung Tahun Kabisat"<<endl;
	cout<<"------www.kelasprogrammer.com-------"<<endl;
	cout<<endl;
	
	cout<<"Masukan Tahun : ";
	cin>>tahun;
	
	if (tahun % 400 == 0){
		cout<<tahun<<" adalah tahun kabisat"<<endl;
	}else if (tahun % 100 == 0){
		cout<<tahun<<" bukan tahun kabisat"<<endl;
	}else if (tahun % 4 == 0){
		cout<<tahun<<" adalah tahun kabisat"<<endl;
	}else {
		cout<<tahun<<" bukan tahun kabisat"<<endl;
	}
	return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;
int main(){

	string a, b,c;
	char kriteria;
	float Partisipasi, Tugas, UTS, UAS, NA;
	cout<<"NILAI AKHIR MAHASISWA D4 MANAJEMEN INFORMATIKA" <<endl<<endl;
	cout<<"Nama Mahasiswa	="; getline (cin,a);
	cout<<"\nNim 			="; getline (cin,b);
	cout<<"\nMata Kuliah	="; getline (cin,c);
	cout<<"\nPartisipasi	="; cin>>Partisipasi;
	cout<<"\nTugas			="; cin>>Tugas;
	cout<<"\nUTS			="; cin>>UTS;
	cout<<"\nUAS			=";	cin>>UAS;
	Partisipasi=Partisipasi*2/10;
	Tugas=Tugas*3/10;
	UTS=UTS*2/10;
	UAS=UAS*3/10;
	NA=+Partisipasi+Tugas+UTS+UAS;		
	cout<<endl;
	cout<<"MAhasiwa dengan nama"<<">>"<<a<<"<<"<<endl;
	cout<<"\nNIM				="<<b<<endl;
	cout<<"\nMata Kuliah		="<<c<<endl;
	cout<<"\nPartisipasi		="<<Partisipasi<<endl;
	cout<<"\nTugas				="<<Tugas<<endl;
	cout<<"\nUTS				="<<UTS<<endl;
	cout<<"\nUAS				="<<UAS<<endl;
	cout<<"\nMemperoleh Nilai rata-rata ="<<NA<<endl;
	cout<<"\nDengan Kategori		="<<kriteria;
	if(NA>=85){
		cout<<"A";
	}else if(NA>=80){
		cout<<"A-";
	}else if(NA>=75){
		cout<<"B+";
	}else if(NA>=70){
		cout<<"B";
	}else if(NA>=65){
		cout<<"B-";
	}else if(NA>=60){
		cout<<"C+";
	}else if(NA>=55){
		cout<<"C";
	}else if(NA>=40){
		cout<<"D";
	}else if(NA>=0){
		cout<<"E";
}
}


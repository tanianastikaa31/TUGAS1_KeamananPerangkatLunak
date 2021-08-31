#include <iostream>
using namespace std;

int main(){
	
	int p, l, t;
	cout<<"HITUNG LUAS DAN VOLUME BALOK by Tania Nastika" <<endl<<endl;
	cout<<"Masukkan Panjang :";
	cin>>p;
	cout<<"Masukkan Lebar :";
	cin>>l;
	cout<<"Masukkan Tinggi :";
	cin>>t;
	
	float v;
	v=p*l*t;
	float L;
    L=(2*p*l)+(2*p*t)+(2*l*t);
    
    cout<<"Maka Jawabannya adalah"<<endl<<endl;
    cout<<"\tVolume balok adalah\t\t = "<<v<<endl<<endl;
    cout<<"\tLuas balok adalah\t = "<<L<<endl<<endl;
   

}

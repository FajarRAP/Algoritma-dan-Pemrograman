#include <iostream>
using namespace std;

int main(){
	int x1, x2, y1, y2, tengahx, tengahy;
	cout<<"Masukkan x1 : ";
	cin>>x1;
	cout<<"Masukkan y1 : ";
	cin>>y1;
	cout<<"Masukkan x2 : ";
	cin>>x2;
	cout<<"Masukkan y2 : ";
	cin>>y2;
	tengahx=(x1+x2)/2;
	tengahy=(y1+y2)/2;
	cout<<"Titik tengah dari A("<<x1<<","<<y1<<") dan B(";
	cout<<x2<<","<<y2<<") = ("<<tengahx<<","<<tengahy<<")"<<endl;
	return 0;
}

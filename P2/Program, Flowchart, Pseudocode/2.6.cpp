#include <iostream>
using namespace std;

int main(){
	int m, n, q, r;
	cout<<"Masukkan m : ";
	cin>>m;
	cout<<"Masukkan n : ";
	cin>>n;
	if(n<m){
		q=m/n;
		r=m%n;
		cout<<"Kuosen = "<<q<<endl;
		cout<<"Residu = "<<r<<endl;
		cout<<"Jadi,"<<endl;
		cout<<m<<" = "<<q<<" x "<<n<<" + "<<r<<endl;
	}else{
		cout<<"Inputan salah karena m > n."<<endl;
	}
	return 0;
}

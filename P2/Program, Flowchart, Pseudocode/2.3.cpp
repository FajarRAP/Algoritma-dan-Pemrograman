#include <iostream>
using namespace std;

int main(){
	float m;
	cout<<"Masukkan meter : ";
	cin>>m;
	float cm=m*100, inch=m*100/2.54;
	cout<<m<<" m = "<<cm<<" cm"<<endl;
	cout<<m<<" m = "<<inch<<" inch";
	return 0;
}

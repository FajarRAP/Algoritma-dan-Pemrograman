#include <iostream>
using namespace std;

int main(){
	for(int a=1; a<6; a++){
		for(int b=1; b<=6; b++){
			if(a==1){
				cout<<"E"<<b<<"  ";
			}else if (a==2){
				cout<<"D"<<b<<"  ";
			}else if (a==3){
				cout<<"C"<<b<<"  ";
			}else if (a==4){
				cout<<"B"<<b<<"  ";
			}else{
				cout<<"A"<<b<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
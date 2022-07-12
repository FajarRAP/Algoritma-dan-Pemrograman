#include <iostream>
#include <math.h>
using namespace std;

class rekursi{
	public:
		void cetak(int n){
			for(int a=1; a<=n; a++){
				if(a%2==0){
					if(a==n){
						cout<<plang2<<"/"<<pbut2<<"^3 = ";
					}else{
						cout<<plang2<<"/"<<pbut2<<"^2 + ";
					}
				}else{
					if(a==n){
						cout<<plang2<<"/"<<pbut2<<"^3 = ";	
					}else{
						cout<<plang2<<"/"<<pbut2<<"^2 - ";
					}
				}
				plang2++;
				pbut2++;
			}

		}

		int tambah(int n, int awal){
			if(awal==n){
				if(awal%2==0){
					hasil=-(plang/pow(pbut,3));
					total+=hasil;
				}else{
					hasil=plang/pow(pbut,2);
					total+=hasil;
				}
				cout<<total<<endl;
				return total;
			}else{
				if(awal%2==0){
					hasil=-(plang/pow(pbut,3));
					total+=hasil;
				}else{
					hasil=plang/pow(pbut,2);
					total+=hasil;
				}
				plang++;
				pbut++;
				return tambah(n, awal+1), total;
			}
		}

	private:	
		float plang=1, pbut=2, plang2=1, pbut2=2, hasil=0, total=0;
};



int main (){
	system("cls");
	int n;
	rekursi titit;

	cout<<"n : ";
	cin>>n;
	titit.cetak(n);
	titit.tambah(n, 1);
	return 0;
}

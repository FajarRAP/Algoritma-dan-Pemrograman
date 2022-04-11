#include<math.h>
using namespace std;

int maks (int a, int b){
    return a>b? a:b;
}
    
int maks (int a, int b, int c){
    int mak=(a>b? a:b);
    return c>mak? c:mak;
}

float pangkat (int a, int b){
    return exp(b*log(a));
}

int perkalian (int a, int b){
    int total=0;
    for(int i=1; i<=abs(b); i++){
        total+=a;
    }
    if(b<0){
        return -total;
    }else{
        return total;
    }
}




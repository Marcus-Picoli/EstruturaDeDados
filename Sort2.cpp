#include <iostream>
#include <algorithm> 

bool ordena(float a, float b){

    return a > b;

}

using namespace std;


int main(){

    const int N=5;
    float vet[N]={9.5,1.7,2.2,5.4,8.8};

    sort(vet,vet+N, ordena);
    for(int i=0; i<N; i++){
        cout << vet[i] << " ";
    }
    return 0;
}    
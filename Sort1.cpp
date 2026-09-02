#include <iostream>
#include <algorithm> // É necessário para utilizar o sort

using namespace std;


int main(){

    int numeros[10]={10,40,20,34,243,90,15,34,78,45};

    for(int i=0; i<10; i++){
        cout<< numeros[i] << " ";
    }
    cout << endl << endl;

    // ordenar a função std::sort
    sort(numeros, numeros+10);

    cout << "vetor ordenado: ";
    for(int i=0; i<10; i++){
        cout<< numeros[i] << " ";
    }

    return 0;
}



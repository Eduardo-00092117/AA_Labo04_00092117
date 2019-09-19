
#include <cstdlib>
#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
    Nodo *prev;
};

void maximo(int T){
    int A[] = {3, 0, 1};
    int B[] = {3, 0, 1};
    if(T != 0){
        int temp = 0;
        for(int i = 0; i < 3; i++){
            if(A[i]%2 == 1){
                if(i == 2){
                    temp = temp = A[i]+1;
                } else{
                    if(A[i+1]%2 == 1){
                        temp = A[i]+1;
                    }
                }
            }
        }
        cout << temp << endl;
        maximo(T-1);
    }
}

int main(int argc, char** argv) {

    /*ListaDoble L1;
    
    L1.agregarElemento(1);
    L1.agregarElemento(2);
    L1.agregarElemento(3);
    L1.agregarElemento(4);
    L1.mostrarListaAdelante();
    
    L1.liberar(2);
    
    L1.mostrarListaAdelante();*/
    
    /*ListaDoble L1;
    
    int A[] = {1, 3, 3, 3, 6, 7};
    
    for(int i = 0; i <6; i++){
        cout << A[i] << endl;
    }
    
    for(int i = 0; i <6; i++){
        if((A[i]%2) == 1){
            if((i) == 5){
                if(A[i]+1 != 2){
                    L1.agregarElemento(A[i]+1);
                }
            } else{
                if((A[i+1]%2) != 0){
                    if(A[i]+1 != 2){
                        L1.agregarElemento(A[i]+1);
                    }
                } 
            }
        }
    }
    
    L1.mostrarListaAdelante();*/
    
    maximo(2);
    
   
    
    return 0;
}


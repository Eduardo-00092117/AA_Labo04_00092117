
#include <cstdlib>
#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
    Nodo *prev;
};

class ListaDoble{
  
    private:
        Nodo *inicio;
        Nodo *fin;
    
    public:
        Nodo* crearNodo(int valor){
            Nodo *n = new Nodo;
            n -> dato = valor;
            n -> sig = nullptr;
            n -> prev = nullptr;
            return n;
        }
        
        void agregarElemento(int valor){
            Nodo *n = crearNodo(valor), *temp;
            if(!inicio){
                inicio = n;
                fin = n;
            } else{
                fin -> sig = n;
                n -> prev = fin;
                fin = n;
            }
        }
        
        void mostrarListaAdelante(){
            Nodo *temp = inicio;
            if(!inicio){
                cout << "La lista no posee elementos" << endl;
            } else{
                while(temp -> sig){
                    cout << temp -> dato << ", ";
                    temp = temp -> sig;
                }
                cout << temp -> dato;
                cout << endl;
            }
        }
        
        void mostrarListaAtras(){
            Nodo *temp = fin;
            if(!inicio){
                cout << "La lista no posee elementos" << endl;
            } else{
                while(temp){
                    cout << temp -> dato << ", ";
                    temp = temp -> prev;
                }
                
                cout << endl;
            }
        }
        
        quitarNodo(Nodo *temp){
            
            
            if(inicio == temp){
                inicio = temp->sig;
            }
            
            if(temp -> sig){
                temp -> sig -> prev = temp -> prev;
            }
            
            if(temp -> prev){
                temp -> prev -> sig = temp -> sig;
            }
            
            free(temp);
        }
        
        liberar(int n){
            Nodo *temp = inicio;
            if(temp -> dato == n){
                cout << "Es el primer elemento de la lista por lo que no se puede eliminar el anterior" << endl;
            } else{
                for(; temp && temp -> dato != n; temp = temp -> sig);
                quitarNodo(temp);
            }
        }
        
        ListaDoble(){
            inicio = nullptr;
            fin = nullptr;
        }
    
    
};

int main(int argc, char** argv) {

    /*ListaDoble L1;
    
    L1.agregarElemento(1);
    L1.agregarElemento(2);
    L1.agregarElemento(3);
    L1.agregarElemento(4);
    L1.mostrarListaAdelante();
    
    L1.liberar(2);
    
    L1.mostrarListaAdelante();*/
    
    ListaDoble L1;
    
    int A[] = {1, 3, 3, 3, 6, 7};
    
    for(int i = 0; i <6; i++){
        cout << A[i] << endl;
    }
    
    for(int i = 0; i <6; i++){
        if((A[i]%2) == 1){
            if((i) == 5){
                L1.agregarElemento(A[i]+1);
            } else{
                if((A[i+1]%2) != 0){
                    L1.agregarElemento(A[i]+1);
                } 
            }
        }
    }
    
    L1.mostrarListaAdelante();
    
   
    
    return 0;
}


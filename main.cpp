#include <cstdlib>
#include <iostream>

using namespace std;



void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int hight){
    int pivot = arr[hight];
    int i = (low-1);
    
    for(int j = low; j <= hight-1;j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[hight]);
    return (i+1);
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size){
    int i;
    for(i=0; i < size; i++){
        cout << arr[i] << "";
    }
    cout << endl;
}

void maximo(int T, int n = 1){
    if(T != 0){
        int prueba = 0;
        cout << "El tamaño del arreglo " << n << ": ";
        cin >> prueba;
        prueba = prueba - 1;
        int A[prueba];
        cout << "El arreglo " << n << endl;
        int temp = 0;
        for(int i = 0; i <= prueba; i++){
            std::cin >> A[i];
        }
        quickSort(A, 0, prueba);
        
        for(int i = 0; i <= prueba; i++){
            if(A[i]%2 == 1){
                if(i == prueba){
                    temp = temp = A[i]+1;
                } else{
                    if(A[i+1]%2 == 1){
                        temp = A[i]+1;
                    }
                }
            }
        }
        cout << "El dato que falta del arreglo " << n << "es " << temp << endl;
        maximo(T-1, n + 1);
    }
}

int main(int argc, char** argv) {
    
    int arr[] = {10, 7, 8, 9, 1, 5};
    int hola;
    
    int T;
    
    cout << "Cuantos casos quiere probar: ";
    cin >> T;
    
    maximo(T); 
    
    return 0;
}


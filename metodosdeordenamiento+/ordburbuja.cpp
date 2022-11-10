#include <iostream>

using namespace std;

//investigar sobtre metodo de ordenamiento BURBUJA e implementarlo para ordenar el arreglo de enteros

void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
void bubbleSort(Point array[], int tam){
    for(int i=0; i<tam; i++){
        for(int j=i+1; j<tam-1;j ++){
            if (array[i].getA() > array[j].getA){
                intercambio(array[i], array[j]);

            }
        }
    }

}
void iSort(Point array[], int n) {
    Point key ;
    int j;
    for (int i = 1; i < n ; i++){
        key = array[i];
        j = j-i;
        while( j >= 0 && array [j].getA()>key.getA()){
            array [j + 1] = array [j];
            j = j - 1 ;        }
        array[j +1] = key;
    }
}

void imprimirArreglo(int array[],int tam){
    cout<<"[";
    for(int i = 0; i<tam; i++){

    }
}



void insertionSort(int array[],int n){
    for(int i = 0; i <n; i++){
        if(array[n]<array[i]){
            array[n] = array[i];
        }


    }
}
    
int main(){
    //int array[]={21,65,98,15};
    Point p1;
    Point p2(12,5);
    Point p3(2,15);
    Point p4 (10,8);
    Point p5 (1,4);

    Point arreglo[] = (p1,p2,p3,p4,p5);
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    
    // sizeoff retornna el tamaño en bytes del tipo de dato 
    // int tam = sizeof(arreglo) / sizeoff(arreglo[0]);

    //printArray(arreglo,tam);
    //iSort(arreglo, tam);
    //printArray(arreglo, tam);    
    return 0;
}


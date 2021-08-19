/*
* Estrucrutra de Datos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 07-05-2021
* METODO DE ORDENAMIENTO QUICKSORT
*/
#include <iostream>
using namespace std;
void LeerArreglo(int,int[]);
void Quicksort(int[],int,int,int);
void MuestraArreglo(int,int[]);

int main()
{

    int n;
    cout << "---ALGORITMO DE ORDENAMIENTO QUICKSORT -- " <<endl;
    cout << "\nNUMERO DE DATOS A LEER: ";
    cin>>n;
    int Numeros[n];
    LeerArreglo(n,Numeros);
    Quicksort(Numeros,0,n-1,n);
    cout << endl << "\n\n LOS ELEMENTOS FUERON ORDENADOS \n\n"<<endl;
    MuestraArreglo(n,Numeros);
    return 0;
}
void Quicksort(int arreglo[],int primero,int ultimo,int n){
    /*Declarando variables*/
    int i,j,aux,pivote;
    i=primero;
    j=ultimo;
    /*Definiendo el pivote*/
    pivote=arreglo[(primero+ultimo)/2];
    cout << "pivote: " <<pivote << endl;
    do{
        while(pivote>arreglo[i])
        i++;
        while(pivote<arreglo[j])
        j--;
        if(i<=j)
        {
            aux=arreglo[i];
            arreglo[i]=arreglo[j];
            arreglo[j]=aux;
            i++;
            j--;
        }
    }while(i<=j);
    if(primero<j){
        cout << "\n primero: " << primero << " j: " << j << "\t";
        Quicksort(arreglo,primero,j,n);
        for(int i=0;i<n;i++){
            cout << "[" << arreglo[i] << "] ";
        }
    }
    if(ultimo>i){
        cout << "\n i: " << i << " ultimo: " << ultimo << "\t";
        Quicksort(arreglo,i,ultimo,n);
        for(int i=0;i<n;i++){
            cout << "[" << arreglo[i] << "] ";
        }
        cout << endl;
    }
}
void LeerArreglo(int n, int array[])
{
    for(int i=0; i<n;i++){
        cout << "\n INGRESE ELEMENTO [" << i << "]: ";
        cin >> array[i];
    }
}
void MuestraArreglo(int n, int array[])
{
    int i;
    for(i=0;i<n;i++){
        cout << "[" << array[i] << "] ";
    }
}

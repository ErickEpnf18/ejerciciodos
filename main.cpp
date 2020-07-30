#include <iostream>
using namespace std;

void ingresar(int a[],int n);
void imprimir(int a[],int n);
void burbuja(int a[],int n);


int main()
{

    int arreglo[100];
    int n;
    cout<<"INGRESE EL TAMANIO:";
    cin>>n;
    ingresar(arreglo,n);
    cout<<endl;
    imprimir(arreglo,n);
    cout<<endl;
    burbuja(arreglo,n);
    cout<<endl;
    imprimir(arreglo,n);

    return 0;
}


void ingresar(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Ingrese el elemeneto al arreglo:"<<endl;
        cin>>a[i];
    }

}

void imprimir(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<< a[i] ;
    }
}
void burbuja(int a[],int n)
{
    int i,j,aux;

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                aux=a[i];

                a[i]=a[j];

                a[j]=aux;
            }
        }
    }
}

/*
//utilizacion de la libreria cmath
#include <iostream>
#include <cmath>
using namespace std;


int main() {

float peso, altura, imc;
cout << "Ingrese el peso: "<<endl;
cin >>peso;
cout <<"Ingrese la altura: "<<endl;
cin >> altura;
altura = altura / 100;


imc = peso / pow(altura,2);

cout <<"Tu IMC es de: "<<imc;

return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    do {
    int n, numero;
    int suma=0;
    int mayor=0;
    float promedio=0;
    cout<<"cuantos numeros quiere ingresar: ";
    cin>>n;
    cout<<"ingrese el numero: ";
    for (int i=1; i<=n; i++){
        cin>>numero;
        suma+=numero;
        if(numero>n){
            mayor=numero;
        }
    }
    promedio= suma/n;
    
    cout<<"La suma de los numero es: "<<suma<<endl;
    cout<<"e promedio de los numero es: "<<promedio<<endl;
    cout<<"El numero mayor es "<<mayor<<endl;
    cout<<"ingrese 1 si quiere continuar: ";
    cin>>a;
    } while(a==1);
    return 1;
}
#include <iostream>
using namespace std;
int main()
{
    int z=1;
    do {
  int a, b, c, d, resultado;
  cout<<"ingrese el rango de multiplicandos: ";
  cin>>a;
  cin>>b;
  cout<<"ingrese el rango de multiplicadores: ";
  cin>>c;
  cin>>d;
  for (int i=a; i<=b; i++){
      for(int j=c; j<=d; j++){
          resultado=i*j;
          cout<<i<<"x"<<j<<": "<<resultado<<endl;
          
          
      }
      
  }
  
  
    cout<<"ingrese 1 si quiere continuar: ";
    cin>>z;
    } while(z==1);
    return 1;
}
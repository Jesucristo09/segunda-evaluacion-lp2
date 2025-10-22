#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int z=1;
    do {
        string palabra, inverso;
        cout<<"ingrese una palabra: ";
        cin>>palabra;
        inverso=palabra;
        reverse(inverso.begin(), inverso.end());
        if(inverso==palabra) {
            cout<<palabra<<", es un palindromo"<<endl;
        } else {
            cout<<palabra<<", no es un palindromo"<<endl;
        }
    cout<<"ingrese 1 si quiere continuar: ";
    cin>>z;
    } while(z==1);
    return 1;
}
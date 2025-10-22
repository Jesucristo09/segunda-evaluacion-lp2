#include <iostream>
#include <string>
using namespace std;
int main()
{
    int z=1;
    do {
        string estudiante;
        int nota=0; 
        int promedio=0; 
        int cantidad=0; 
        int suma=0;
        int menor=21;
        int mayor=0;
        cout<<"ingrese el numero de estudiantes que va a registrar: ";
        cin>>cantidad;
      
        for (int i=1; i<=(cantidad); i++) {

            
        cout<<"ingrese el nombre del estudiante: ";
        cin>>estudiante;
        cout<<"ingrese su nota: ";
        cin>>nota;
        
            if(nota<menor){
                menor=nota;
            }
            if(nota>mayor){
                mayor=nota;
            }
            suma+=nota;
            cout<<estudiante<<": "<<nota<<endl;

        
        }
        promedio= suma/cantidad;
        cout<<"el promedio es: "<<promedio<<endl;
        cout<<"nota mas baja: "<<menor<<endl;
        cout<<"nota mas alta: "<<mayor<<endl;
        
        
    cout<<"ingrese 1 si quiere continuar: ";
    cin>>z;
    } while(z==1);
    return 1;
}
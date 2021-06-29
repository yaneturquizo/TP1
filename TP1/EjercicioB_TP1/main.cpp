#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     float a,b,c;
    cout << "Ingrese el coeficiente cuadratico(distinto de cero)"<<endl;
    cin >>a;
    cout << "Ingrese el coeficiente lineal" <<endl;
    cin >>b;
    cout << "Ingrese el termino intependiente"<<endl;
    cin >>c;

    float disc,x1,x2,den;
    disc=b*b-4*a*c;
    den=2*a;

     if((disc>=0)&&(den!=0)) {

        x1= ((-b) + (sqrt(disc)))/den;
        x2= ((-b) - (sqrt(disc)))/den;
        cout <<"x1: "<<x1<<endl;
        cout <<"x2: "<<x2<<endl;
     }
     else if((disc<0)&&(den!=0)){
        cout <<"No tiene raices reales"<<endl;
         }
            else {
               cout<<"No posee un valor definido"<<endl;


             }

    return 0;
}

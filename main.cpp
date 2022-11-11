
#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
float a=0;
float b=0;
float c=0;
cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
float AreaTriangolo = (a * b) / 2;
float AreaQuadrato = a * a;
float AreaRettangolo = a * b;
float AreaTrapezio = ( a + a) * c / 2;
cout << "AreaTriangolo:" << AreaTriangolo << endl;
cout << "AreaQuadrato:" << AreaQuadrato << endl;
cout << "AreaRettangolo:" << AreaRettangolo << endl;
cout << "AreaTrapezio:" << AreaTrapezio << endl;
}

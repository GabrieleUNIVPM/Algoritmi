#include <iostream>
#include <string>
#include <math.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void Trapezi()

{
	
	cout<<"\n\nIn esecuzione integrazione con IL METODO DEI TRAPEZI\n "<<endl;
	
 double h , a , b ,somma;
 int n ;


 
 
 do {
 cout<<"\n Limite inferiore d'integrazione : ";
 cin>>a;
 cout<<"\n Limite superiore d'integrazione : ";
 cin>>b ;
 
 if (a>=b)
 cout<<"\n Errore: a deve essere minore di b, RIPROVARE: ";
 
 } while ( a >= b) ;
 
 
 
 cout<< "\nNumero di intervalli\t ";
 cin>>n ;
 
 h=(b-a)/n ;		//ampiezza degli intervalli
 
 
 somma=( f(a)+f(b) )*0.5 ; /*Valore approssimato dell'integrale*/
 
 
 for (int i=1; i<n; i++)
 {
 	somma += f (a+ i*h) ; /* Calcolo di f ( x ) e somma all'area */
 	somma *= h;
 }
 
 
 
 cout<<"L' integrale vale \t"<<somma;



}




 


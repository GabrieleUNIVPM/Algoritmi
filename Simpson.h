#include <iostream>
#include <math.h>

using namespace std;



void Simpson(){
	
	
	cout<<"\n\nIn esecuzione integrazione con IL METODO DI SIMPSON\n "<<endl;
	
	

 double h , a , b , somma, sum4=0.0 ,sum2=0.0;
 int n ;
 
do {
 cout<<"\n Limite inferiore d'integrazione : ";
 cin>>a;
 cout<<"\n Limite superiore d'integrazione : ";
 cin>>b ;
 
 if (a>=b)
 cout<<"\n Errore: a deve essere minore di b, RIPROVARE: ";
 
 } while ( a >= b) ;
 
 cout<< "Numero di intervalli\t ";
 cin>>n ;
 
 h=(b-a)/n ;		//ampiezza degli intervalli
 

 somma = f (a) + f (b) ;
 
 for (int i=1; i<n; i+=2)
 sum4 += f(a + i*h) ; // Calcolo di f ( x ) e somma a sum4 
 
 for (int i = 2; i < n; i += 2)
 sum2 += f(a+i*h) ; //Calcolo di f ( x ) e somma a sum2
 
 somma = (h /3)*(somma + 4*sum4 + 2*sum2) ;
 cout<<"\n L'integrale della funzione vale\t "<<somma;

 }

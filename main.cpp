#include <iostream>
#include <string>
#include <math.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include <chrono>


#include "Header.h"


using namespace std;

int main(void){
		
		printByteSizes ();
		
		int j;
		double h , a , b ,somma,n;
		
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
 		cout<<"\n Ampiezza di ciascun intervallo, calcolata tramite la formula h=(b-a)/n: \t"<<h;
		
		
		
		for(int i=0;i<2;i++){
		
		if(i==0) j=6;
		else if(i==1) j=16;
		
		
		
		FloatDoubleDefault(j);
		
		
		//double h , a , b ,somma,n;
		//int n ;
 		
 		/*
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
 		cout<<"\n Ampiezza di ciascun intervallo, calcolata tramite la formula h=(b-a)/n: \t"<<h;
		
		*/
		
		cout<<"\n\nIn esecuzione integrazione con IL METODO DEI RETTANGOLI a "<<j<<" cifre significative\n "<<endl;
		Rettangoli(h,a,b,n);
		
		cout<<"\n\nIn esecuzione integrazione con IL METODO DEI TRAPEZI a "<<j<<" cifre significative\n "<<endl;
		Trapezi(h,a,b,n);
		
		cout<<"\n\nIn esecuzione integrazione con IL METODO DI SIMPSON a "<<j<<" cifre significative\n "<<endl;
		Simpson(h,a,b,n);
		
	}	
		
		
		

	return (0);
}

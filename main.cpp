#include <iostream>
#include <string>
#include <math.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include <chrono>

#include "Function.h"
#include "FloatDoubleDefault.h"
#include "Rettangoli.h"
#include "Trapezi.h"
#include "Simpson.h"


using namespace std;
fstream stream;

int main(void){

		printByteSizes ();
		
		int j;
		
		for(int i=0;i<2;i++){
		
		if(i==0) j=6;
		else if(i==1) j=16;
		
		FloatDoubleDefault(j);
		
		
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
 			
		
		cout<< "Numero di intervalli\t ";
 		cin>>n ;
 
 		h=(b-a)/n ;		//ampiezza degli intervalli
 		cout<<"\n Ampiezza di ciascun intervallo, calcolata tramite la formula h=(b-a)/n: \t"<<h;
		
		
		Rettangoli(h,a,b,n);
		Trapezi(h,a,b,n);
		//Simpson(h,a,b,n);
		
	}	
		
		
		

	return (0);
}

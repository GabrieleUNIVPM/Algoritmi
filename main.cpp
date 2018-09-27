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


		for(int i=0;i<2;i++){

		if(i==0)
		{

			j=6;

			cout<<"\n\t\tUso della NOTAZIONE FLOAT : ";

			FloatDoubleDefault(j);

			float h , a , b , somma, n;

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



 			cout<<"\n\nIn esecuzione integrazione con IL METODO DEI RETTANGOLI a "<<j<<" cifre significative\n "<<endl;
			RettangoliFloat(h,a,b,n);

			cout<<"\n\nIn esecuzione integrazione con IL METODO DEI TRAPEZI a "<<j<<" cifre significative\n "<<endl;
			TrapeziFloat(h,a,b,n);

			cout<<"\n\nIn esecuzione integrazione con IL METODO DI SIMPSON a "<<j<<" cifre significative\n "<<endl;
			SimpsonFloat(h,a,b,n);

		}


		else if(i==1)
		{
			j=16;

            cout<<"\n\n-------------------------------------------------------------------";
			cout<<"\n\n\t\tUso della NOTAZIONE DOUBLE : ";

			FloatDoubleDefault(j);

			double h , a , b , somma, n;

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



 			cout<<"\n\nIn esecuzione integrazione con IL METODO DEI RETTANGOLI a "<<j<<" cifre significative\n "<<endl;
			RettangoliDouble(h,a,b,n);

			cout<<"\n\nIn esecuzione integrazione con IL METODO DEI TRAPEZI a "<<j<<" cifre significative\n "<<endl;
			TrapeziDouble(h,a,b,n);

			cout<<"\n\nIn esecuzione integrazione con IL METODO DI SIMPSON a "<<j<<" cifre significative\n "<<endl;
			SimpsonDouble(h,a,b,n);

		}


	}

	return (0);
}

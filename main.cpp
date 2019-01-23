#include <iostream>
#include <math.h>
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

                cout<<"\n\n-------------------------------------------------------------------";
                cout<<"\n\n\t\tUso della NOTAZIONE FLOAT : ";

                FloatDoubleDefault(j);

                float a , b , somma, n,
                nSimp /*Numero di intervalli per Simpson, obbligatoriamente pari*/,
                h ,
                hSimp /*Ampiezza degli intervalli per il calcolo con Simpson*/;

                cout<<"\n\n-------------------------------------------------------------------";

				do {
                    cout<<"\n Limite inferiore d'integrazione : ";
                    cin>>a;
                    cout<<"\n Limite superiore d'integrazione : ";
                    cin>>b ;

                    if (a>=b)
                    cout<<"\n Errore: a deve essere minore di b, RIPROVARE: ";

 				} while ( a >= b) ;



 				cout<< "\nNumero di intervalli per il metodo dei Rettangoli e dei Trapezi\t ";
                cin>>n ;

                float due=2;

 				do {

                    cout<< "\nNumero di intervalli per Simpson, obbligatoriamente pari\t ";
                    cin>>nSimp ;

                    if ( fmod(nSimp,due)/*nSimp%due*/ != 0 )
                        cout<< "\nIl numero di intervalli di integrazione per il metodo di Simpson deve essere obbligatoriamente pari, RIPROVARE:\t ";


                } while ( fmod(nSimp,due)/*nSimp%due*/ != 0 ) ;


 			h=(b-a)/n ;		//ampiezza degli intervalli
 			cout<<"\n Ampiezza di ciascun intervallo per il metodo dei Rettangoli e dei Trapezi, calcolata tramite la formula h=(b-a)/n: \t"<<h;

 			hSimp=(b-a)/nSimp ;		//ampiezza degli intervalli
 			cout<<"\n Ampiezza di ciascun intervallo per il metodo di Simpson, calcolata tramite la formula h=(b-a)/n: \t"<<h;

            cout<<"\n\n-------------------------------------------------------------------";
 			cout<<"\n\nIn esecuzione integrazione con IL METODO DEI RETTANGOLI a "<<j<<" cifre significative\n "<<endl;
			RettangoliFloat(h,a,b,n);

			cout<<"\n\n-------------------------------------------------------------------";
			cout<<"\n\nIn esecuzione integrazione con IL METODO DEI TRAPEZI a "<<j<<" cifre significative\n "<<endl;
			TrapeziFloat(h,a,b,n);

			cout<<"\n\n-------------------------------------------------------------------";
			cout<<"\n\nIn esecuzione integrazione con IL METODO DI SIMPSON a "<<j<<" cifre significative\n "<<endl;
			SimpsonFloat(h,a,b,nSimp);

		}


            else if(i==1)
            {
                j=16;

                cout<<"\n\n-------------------------------------------------------------------";
                cout<<"\n\n\t\tUso della NOTAZIONE DOUBLE : ";

                FloatDoubleDefault(j);

                double a , b , somma, n,
                nSimp /*Numero di intervalli per Simpson, obbligatoriamente pari*/,
                h ,
                hSimp /*Ampiezza degli intervalli per il calcolo con Simpson*/;

                cout<<"\n\n-------------------------------------------------------------------";


				do {
                    cout<<"\n Limite inferiore d'integrazione : ";
                    cin>>a;
                    cout<<"\n Limite superiore d'integrazione : ";
                    cin>>b ;

                    if (a>=b)
                        cout<<"\n Errore: a deve essere minore di b, RIPROVARE: ";

 				} while ( a >= b) ;



 				cout<< "\nNumero di intervalli per il metodo dei Rettangoli e dei Trapezi\t ";
                cin>>n ;

                double due=2;

 				do {

                    cout<< "\nNumero di intervalli per Simpson, obbligatoriamente pari\t ";
                    cin>>nSimp ;

                    if ( fmod(nSimp,due)/*nSimp%due*/ != 0 )
                        cout<< "\n\nIl numero di intervalli di integrazione per il metodo di Simpson deve essere obbligatoriamente pari, RIPROVARE:\t ";


                } while ( fmod(nSimp,due)/*nSimp%due*/ != 0 ) ;

 			h=(b-a)/n ;		//ampiezza degli intervalli
 			cout<<"\n Ampiezza di ciascun intervallo per il metodo dei Rettangoli e dei Trapezi, calcolata tramite la formula h=(b-a)/n: \t"<<h;

 			hSimp=(b-a)/nSimp ;		//ampiezza degli intervalli
 			cout<<"\n Ampiezza di ciascun intervallo per il metodo di Simpson, calcolata tramite la formula h=(b-a)/n: \t"<<h;


            cout<<"\n\n-------------------------------------------------------------------";
 			cout<<"\n\nIn esecuzione integrazione con IL METODO DEI RETTANGOLI a "<<j<<" cifre significative\n "<<endl;
			RettangoliDouble(h,a,b,n);

			cout<<"\n\n-------------------------------------------------------------------";
			cout<<"\n\nIn esecuzione integrazione con IL METODO DEI TRAPEZI a "<<j<<" cifre significative\n "<<endl;
			TrapeziDouble(h,a,b,n);

			cout<<"\n\n-------------------------------------------------------------------";
			cout<<"\n\nIn esecuzione integrazione con IL METODO DI SIMPSON a "<<j<<" cifre significative\n "<<endl;
			SimpsonDouble(h,a,b,nSimp);

		}


	}

	return (0);
}

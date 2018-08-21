#include <iostream>
#include <math.h>

using namespace std;



 
 
  void SommaSimp(double h, double a, int n){
 
 double somma, sum4=0.0 ,sum2=0.0;
 int i;
 
 for (i=1; i<n; i+=2) 
 sum4 += f(a + i*h) ; // Calcolo di f ( x ) e somma a sum4
 
 
 //cout<<"\n "<<i<<"� iterazione:"; ***LINEA PROBABILMENTE DA CANCELLARE***
 
  
 
 for (int i = 2; i < n; i += 2)
 sum2 += f(a+i*h) ; //Calcolo di f ( x ) e somma a sum2
 
 somma = (h /3)*(somma + 4*sum4 + 2*sum2) ;
 
 	
 	if(i==n)
	 cout<<"\n Somma totale : \t"<<somma;
	 
	else
	 cout<<"\n Somma parziale : \t"<<somma;

}




void Simpson(){
	
	
	cout<<"\n\nIn esecuzione integrazione con IL METODO DI SIMPSON\n "<<endl;
	
	

 double h , a , b, sommaproxS;
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
 cout<<"\n Ampiezza di ciascun intervallo, calcolata tramite la formula h=(b-a)/n: \t"<<h;

sommaproxS = f (a) + f (b) ;
cout<<"\n Valore dell'integrale utilizzando la formula approssimata f (a) + f (b) : \n";

 cout<<"\n Valore dell'integrale utilizzando il metodo di Simpson: \n";
 
  //get the start time
     	auto start_I = std::chrono::steady_clock::now();
   	
   	 //run some code
		SommaSimp(h, a, n);

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"\n Elapsed Time (s): \t" << I_elapsed_time_ns / 1e9 << std::endl;



 }

#include <iostream>
#include <string>
#include <math.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <chrono>


using namespace std;



void SommaRet(double h ,double a,int n){

double somma;

 for (int i=0; i<n; i++)
 
 	{
 	somma +=f(a + i*h) ; //Calcolo di f ( x ) e somma all'area
 	somma *= h;
 
	cout<<"\n Numero di intervalli utilizzati : \t"<<i+1;
	
 	if(i+1<n)
	 cout<<"\n Somma parziale : \t"<<somma;
	 
	else
	 cout<<"\n Somma totale : \t"<<somma;
	 
 	}

}


void Rettangoli(){
	
cout<<"\n\nIn esecuzione integrazione con IL METODO DEI RETTANGOLI\n "<<endl;
	
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
 
 	 //get the start time
     	auto start_I = std::chrono::steady_clock::now();
   	
   	 //run some code
		SommaRet(h,a,n);

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"\nElapsed Time (s): \t" << I_elapsed_time_ns / 1e9 << std::endl;
 
 }





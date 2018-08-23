#include <iostream>
#include <string>
#include <math.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <chrono>

#include "Header.h"

using namespace std;


 void SommaTrap(double h, double a, int n){
 
 double somma;
 
 for (int i=1; i<=n; i++)
 {
 	somma += f (a+ i*h) ; /* Calcolo di f ( x ) e somma all'area */
 	somma *= h;
 	
 	cout<<"\n Numero di intervalli esaminati : \t"<<i;
	
 	if(i!=n)
	 cout<<"\n Somma parziale : \t"<<somma;
	 
	else
	 cout<<"\n Somma totale : \t"<<somma;
	 
 	}

 }







void Trapezi(double h,double a,double b,int n)

{
	
	
 double sommaproxT;

 
 sommaproxT=( f(a)+f(b) )*0.5 ; //Valore approssimato dell'integrale
 cout<<"\n Valore approssimato dell'integrale tramite la formula ( f(a)+f(b) )*0.5: \t"<<sommaproxT;
 
 
 cout<<"\n Valore dell'integrale utilizzando il metodo dei Trapezi: \n";
 
  //get the start time
     	auto start_I = std::chrono::steady_clock::now();
   	
   	 //run some code
		SommaTrap(h,a,n);

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"\n Elapsed Time (s): \t" << I_elapsed_time_ns / 1e9 << std::endl;
 
}



 

#include <iostream>
#include <math.h>
#include <chrono>

#include "Header.h"


using namespace std;



  void SommaSimpFloat(float h, float a, float n){
 
 float somma, sum4=0.0 ,sum2=0.0;
 int i;
 
 for (i=1; i<n; i+=2) 
 sum4 += f(a + i*h) ; // Calcolo di f ( x ) e somma a sum4
 
  
 
 for (int i = 2; i < n; i += 2)
 sum2 += f(a+i*h) ; //Calcolo di f ( x ) e somma a sum2
 
 somma = (h /3)*(somma + 4*sum4 + 2*sum2) ;
 
 	
 	if(i==n)
	 cout<<"\n Somma totale : \t"<<somma;
	 
	else
	 cout<<"\n Somma parziale : \t"<<somma;

}

 
  void SommaSimpDouble(double h, double a, double n){
 
 double somma, sum4=0.0 ,sum2=0.0;
 int i;
 
 for (i=1; i<n; i+=2) 
 sum4 += f(a + i*h) ; // Calcolo di f ( x ) e somma a sum4
 
  
 
 for (int i = 2; i < n; i += 2)
 sum2 += f(a+i*h) ; //Calcolo di f ( x ) e somma a sum2
 
 somma = (h /3)*(somma + 4*sum4 + 2*sum2) ;
 
 	
 	if(i==n)
	 cout<<"\n Somma totale : \t"<<somma;
	 
	else
	 cout<<"\n Somma parziale : \t"<<somma;

}


void SimpsonFloat(float h,float a,float b,float n){
	



 cout<<"\n Valore dell'integrale utilizzando il metodo di Simpson: \n";
 
  //get the start time
     	auto start_I = std::chrono::steady_clock::now();
   	
   	 //run some code
		SommaSimpFloat(h, a, n);

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"\n Elapsed Time (s): \t" << I_elapsed_time_ns / 1e9 << std::endl;



 }

void SimpsonDouble(double h,double a,double b,double n){
	



 cout<<"\n Valore dell'integrale utilizzando il metodo di Simpson: \n";
 
  //get the start time
     	auto start_I = std::chrono::steady_clock::now();
   	
   	 //run some code
		SommaSimpDouble(h, a, n);

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"\n Elapsed Time (s): \t" << I_elapsed_time_ns / 1e9 << std::endl;



 }

#include <iostream>
#include <math.h>
#include <chrono>

#include "Header.h"


using namespace std;


float somma, sum4=0.0 ,sum2=0.0;
 int i;

 double soma, summ4=0.0 ,summ2=0.0;
 //int i;

  void SommaSimpFloat(float h, float a, float nSimp){

 /*float somma, sum4=0.0 ,sum2=0.0;
 int i;*/

 for (i=1; i<nSimp; i+=2)
 sum4 += f(a + i*h) ; // Calcolo di f ( x ) e somma a sum4

 for (i = 2; i < nSimp; i += 2)
 sum2 += f(a + i*h) ; //Calcolo di f ( x ) e somma a sum2

 somma = (h /3)*(somma + 4*sum4 + 2*sum2) ;


 	if(i==nSimp)
	 cout<<"\n Somma totale : \t"<<somma;

	else
	 cout<<"\n Somma parziale : \t"<<somma;

}


  void SommaSimpDouble(double h, double a, double nSimp){

/* double somma, sum4=0.0 ,sum2=0.0;
 int i;*/

 for (i=1; i<nSimp; i+=2)
 summ4 += f(a + i*h) ; // Calcolo di f ( x ) e somma a sum4



 for (int i = 2; i < nSimp; i += 2)
 summ2 += f(a+i*h) ; //Calcolo di f ( x ) e somma a sum2

 soma = (h /3)*(soma + 4*summ4 + 2*summ2) ;


 	if(i==nSimp)
	 cout<<"\n Somma totale : \t"<<soma;

	else
	 cout<<"\n Somma parziale : \t"<<soma;

}


void SimpsonFloat(float h,float a,float b,float nSimp){




 cout<<"\n Valore dell'integrale utilizzando il metodo di Simpson: \n";

  //get the start time
     	auto start_I = std::chrono::steady_clock::now();

   	 //run some code
		SommaSimpFloat(h, a, nSimp);

    	//get the end time
        auto end_I = std::chrono::steady_clock::now();


     /*
     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());
    */


     //find the difference
        double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());


     //output
        std::cout <<"\n Tempo impiegato per il calcolo [s]: \t" << I_elapsed_time_ns / 1e9 << std::endl;



 }

void SimpsonDouble(double h,double a,double b,double nSimp){




 cout<<"\n Valore dell'integrale utilizzando il metodo di Simpson: \n";

  //get the start time
     	auto start_I = std::chrono::steady_clock::now();

   	 //run some code
		SommaSimpDouble(h, a, nSimp);

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"\n Tempo impiegato per il calcolo [s]: \t" << I_elapsed_time_ns / 1e9 << std::endl;



 }

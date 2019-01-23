#include <iostream>
#include <math.h>
#include <chrono>


#include "Header.h"


using namespace std;



  void SommaSimpFloat(float h, float a, float nSimp){

  float somma, sum4=0.0 ,sum2=0.0;
 int i=0;

i=0;
for(int cont=1;cont<=nSimp/2;cont++)
{

    somma+=(h/3)*(f(a+i*h)+4*f(a+(i+1)*h)+f(a+(i+2)*h));

    i+=2;

}
cout<<"\n Somma totale: \t"<<somma;
}


  void SommaSimpDouble(double h, double a, double nSimp){

  double soma, summ4=0.0 ,summ2=0.0;
 int i=0;


for(int cont=1;cont<=nSimp/2;cont++)
{

    soma+=(h/3)*(f(a+i*h)+4*f(a+(i+1)*h)+f(a+(i+2)*h));

    i+=2;

}
cout<<"\n Somma totale: \t"<<soma;
}


void SimpsonFloat(float h,float a,float b,float nSimp){




 cout<<"\n Valore dell'integrale utilizzando il metodo di Simpson: \n";

  //get the start time
     	auto start_I = std::chrono::steady_clock::now();

   	 //run some code
		SommaSimpFloat(h, a, nSimp);

    	//get the end time
        auto end_I = std::chrono::steady_clock::now();



     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());


     //output
        cout <<"\n Tempo impiegato per il calcolo [s]: \t" << I_elapsed_time_ns / 1e9 << endl;



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
     cout <<"\n Tempo impiegato per il calcolo [s]: \t" << I_elapsed_time_ns / 1e9 << endl;



 }

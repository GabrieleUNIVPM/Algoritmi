#include <iostream>
#include <math.h>
#include <chrono>

#include "Header.h"

using namespace std;



    void SommaTrapFloat(float h, float a, float n)
    {

        float somma=0;

        for (int i=0; i<=n-1 ; i++)
            somma += h/2* (f (a+ i*h)+f(a+(i+1)*h)) ; // Calcolo di f ( x ) e somma all'area


        cout<<"\n Somma totale : \t"<<somma;

    }


    void SommaTrapDouble(double h, double a, double n)
    {

    double somma=0;

    for (int i=0; i<=n-1 ; i++)
        somma += h/2* (f (a+ i*h)+f(a+(i+1)*h)) ; // Calcolo di f ( x ) e somma all'area

    cout<<"\n Somma totale : \t"<<somma;

    }


void TrapeziFloat(float h,float a,float b,float n)
    {


 //get the start time
     	auto start_I = std::chrono::steady_clock::now();

   	 //run some code
		SommaTrapFloat(h,a,n);

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     cout <<"\n Tempo impiegato per il calcolo [s]: \t" << I_elapsed_time_ns / 1e9 << endl;

    }






void TrapeziDouble(double h,double a,double b,double n)
    {


  //get the start time
     	auto start_I = std::chrono::steady_clock::now();

   	 //run some code
		SommaTrapDouble(h,a,n);

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     cout <<"\n Tempo impiegato per il calcolo [s]: \t" << I_elapsed_time_ns / 1e9 << endl;

    }






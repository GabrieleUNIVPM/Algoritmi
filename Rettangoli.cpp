#include <iostream>
#include <string>
#include <math.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <chrono>

#include "Header.h"

using namespace std;

void SommaRetFloat(float h ,float a,float n){

float somma;

 for (int i=0; i<n; i++)
 
 	{
 	somma +=h* (f (a+ i*h)) ; //Calcolo di f ( x ) e somma all'area
 	
 
	cout<<"\n Numero di intervalli utilizzati : \t"<<i+1;
	
 	if(i+1<n)
	 cout<<"\n Somma parziale : \t"<<somma;
	 
	else
	 cout<<"\n Somma totale : \t"<<somma;
	 
 	}

}

void SommaRetDouble(double h ,double a,double n){

double somma;

 for (int i=0; i<n; i++)
 
 	{
 	somma +=h* (f (a+ i*h)) ; //Calcolo di f ( x ) e somma all'area
 	
 
	cout<<"\n Numero di intervalli utilizzati : \t"<<i+1;
	
 	if(i+1<n)
	 cout<<"\n Somma parziale : \t"<<somma;
	 
	else
	 cout<<"\n Somma totale : \t"<<somma;
	 
 	}

}



void RettangoliFloat(float h,float a,float b,float n){
	

	
	 //get the start time
     	auto start_I = std::chrono::steady_clock::now();
   	
   	 //run some code
		SommaRetFloat(h,a,n);

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"\nElapsed Time (s): \t" << I_elapsed_time_ns / 1e9 << std::endl;
 
 }


void RettangoliDouble(double h,double a,double b,double n){
	

	
	 //get the start time
     	auto start_I = std::chrono::steady_clock::now();
   	
   	 //run some code
		SommaRetDouble(h,a,n);

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"\nElapsed Time (s): \t" << I_elapsed_time_ns / 1e9 << std::endl;
 
 }

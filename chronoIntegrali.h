#include <iostream>
#include <chrono>
#include <ctime>

#include "Rettangoli.h"
#include "Trapezi.h"
#include "Simpson.h"
 
using namespace std;
 
int chronoIntegrali(int f)
{
	if(f==0){
   	
   	 //get the start time
     	auto start_I = std::chrono::steady_clock::now();
   	
   	 //run some code
		Rettangoli();

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"\nElapsed Time (s): \t" << I_elapsed_time_ns / 1e9 << std::endl;
		
	}
	
    
    else if(f==1){
    
	 //get the start time
     	auto start_I = std::chrono::steady_clock::now();
   	
   	 //run some code
		Trapezi();

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"Elapsed Time (s): " << I_elapsed_time_ns / 1e9 << std::endl;
			  	
	}
	
	else if(f==2){
	
 //get the start time
     	auto start_I = std::chrono::steady_clock::now();
   	
   	 //run some code
		Simpson();

    	//get the end time
     auto end_I = std::chrono::steady_clock::now();

     //find the difference
     double I_elapsed_time_ns = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end_I - start_I).count());

     //output
     std::cout <<"Elapsed Time (s): " << I_elapsed_time_ns / 1e9 << std::endl;
     
	}     
    
    
    
    
              
    
    
   
    
}

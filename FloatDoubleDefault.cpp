#include <iostream>
#include <string>
#include <math.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>

#include "Header.h"

using namespace std;

void printByteSizes (){
cout << "La lunghezza standard dei float e' di : \t " << sizeof ( float ) << " Bytes . "<<endl;
cout << "La lunghezza standard dei double e' di : \t " << sizeof (double) << " Bytes . \n"<<endl;
}

void printFloat (){
float bigNumber = 1.123456789123456;
cout << bigNumber << endl;
}

void printDouble (){
double bigNumber = 1.123456789123456;
cout <<bigNumber <<endl;
}



void FloatDoubleDefault(int j){
	
	cout.precision(j);
	
	cout<<"\n\nRappresentazione di prova a "<<j<<" cifre significative di Float"<<endl;
	printFloat ();
	cout<<"\nRappresentazione a "<<j<<" cifre significative di Double"<<endl;
	printDouble ();
	
}

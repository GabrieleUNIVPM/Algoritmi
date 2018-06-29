#include <iostream>
#include <string>
#include <math.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>


using namespace std;

void printSizes (){
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



void FloatDoubleDefault(){
	
	printSizes ();
	
	cout<<"\nRappresentazione di prova a 6 cifre significative di Float"<<endl;
	printFloat ();
	cout<<"\nRappresentazione di prova a 6 cifre significative di Double"<<endl;
	printDouble ();
	
	cout.precision(16);
	cout<<"\n\nRappresentazione a 16 cifre significative di Float"<<endl;
	printFloat ();
	cout<<"\nRappresentazione a 16 cifre significative di Double"<<endl;
	printDouble ();
	
}

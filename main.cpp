#include <iostream>
#include <string>
#include <math.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include <chrono>

#include "FloatDoubleDefault.h"
#include "Rettangoli.h"
#include "Trapezi.h"
#include "Simpson.h"


using namespace std;
fstream stream;

int main(void){

	    FloatDoubleDefault();
		
		Rettangoli();
		//Trapezi();
		Simpson();

	return (0);
}

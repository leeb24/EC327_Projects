#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include "FileFunctions.h"
using namespace std;

void WriteRandomDataToFile(const char *filename, int N, int M) // Filename and from 0 to M , N numbers of random Ints

{
	double value;

	srand (time(NULL));


       	ofstream myfile;

       	myfile.open(filename);
    if (!(M<0 || N<0))
    {
		for( int i = 1 ; i <= N ; i++ )
	
		{	value = rand() % (M+1); // one Int made per loop


       		myfile <<  value << endl;

    	}
    }
    myfile.close();
    
}

void ReadDataFromFile(const char *filename, int* myArray, int &size) 

{	int RV =0;

	int Count=0;

	ifstream input(filename);
    
	while(!input.eof()) //Read until endof file 
	{	
		
		input >> RV;

		if (input.eof()) 
		{
			break;
		}


		myArray[Count] = RV; // puts the numbers in the file into myArray Array 

		Count++;


	}
	
	size = Count;//size changes from 1000 to the size of the array
	
 	
 	
}

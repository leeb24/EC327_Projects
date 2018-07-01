#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include "FileFunctions.h"
#include "Statistics.h"
using namespace std;

int main() 
{	

	int N;

	int M;

	const char* Textfilename = "numbers.txt"; 

	int size = 1000; 

	int* myArray = new int [size]; // generates a array of size 1000 in the heap

	float mean;
	
	float stDev;

	srand (time(NULL)); //seed time into rand


   	N = rand() % 1001; //randomly generates number 

    M = rand() % 1000;

    WriteRandomDataToFile( Textfilename, N, M); //invoke Writerandomdatatofile function

    ReadDataFromFile(Textfilename, myArray, size); //invoke readatatofile function

    mean = getMean(myArray, size); // get mean from getMean function

    stDev = getStdev(myArray,size,mean); // Standard deviation
	
	cout<< "Array size is: " << size << endl;
	
	cout<<"Mean is: "<< fixed <<setprecision(2) << mean << endl;
	
	cout<<"Standard Deviation is: " << stDev <<endl;
    	
    	delete  []myArray; // Delete pointer for possible memory leak

	return 0;
}

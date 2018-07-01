#include <iostream>
#include "Statistics.h"

using namespace std;

float getMean(int* myArray, int size)
{
	
	double sum = 0; 
	
	double mean;
    
    
	
	for (int i = 0; i < size ; i++)
	
	{
		
		sum = sum + myArray[i]; // sum up the numbers from array
		
	}

	mean = sum / size ; //get mean value
	return mean;

}

float getStdev(int* myArray, int size, double mean)
{	
	double sum;	
	double sum2;
	double tol = 1e-6; //set tolerance number for sqrt
	double guess;
	double n;
	double top;
	double bottom;
	
	;

	for(int i=0; i < size ;i++)
	{
		sum = sum + ((myArray[i]-mean)*(myArray[i]-mean)); //process for getting variance
	}
	
	sum2 = sum/(double) size; //sum2 is now varience
	
	guess= sum2;
	
	n = guess; //used sqrt function from Lab 4 
	
	
    	do
    	{	
    		
        	// Check Convergence
		
        	guess = (guess + n/guess) / 2;
        
        	//abs ( guess < n/guess )?
		
        	if (guess < n / guess)
		{
	      		top = n / guess - guess;
			bottom = guess;
		}
        
        	//abs ( guess > n/guess )?
		
       		else 
       		{
		 	top = guess - n / guess;
		 	bottom = n / guess;
		}
    
        	// Check if within or not within Tol
	
    	}
    	while (top / bottom > tol);
    
        // if its within tolerance stop loop
	
    return guess; //return Standard deviation number
}
	
	
  

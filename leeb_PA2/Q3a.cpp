#include <iostream>

using namespace std;

int gcd(int m ,int n)
{
    if (m > 0 && n > 0)  // check if both variables are positive
    {
        if(m%n == 0)    //case 1
            return n;
	
        else            //case 2
            return gcd(n,m%n);   //recursion of gcd function
    }
    
    else                // if not positive or 0 , return 0 back to main
        return 0;
}



int main()
{
	
	int m;     // variables
	int n;
	int GT;     // Common denominator variable
	cout << "Enter m: ";
	cin >> m ;
	cout << "Enter n: ";
	cin >> n ;
	
	GT= gcd(m,n); //invoke function
	
	cout << "GCD is: " << GT <<endl;



}

#include <iostream>

using namespace std;

double series(int n)
{	
	double sum;
	if (n==0)
	{
		return 0; // base of recursion function
	}
	
	
	else 
	{
	double n2 = n;
	return ((2*n2)/(3*n2+2))+series(n-1); //series function recursion
	}
	
}



int main()
{
	int n;
	double sum1;
	cout << "Enter n: ";
	cin >> n;
	
	sum1 = series(n); //invoke function
	
	cout << "Series("<<n<<") is: " << sum1 << endl;
	


}

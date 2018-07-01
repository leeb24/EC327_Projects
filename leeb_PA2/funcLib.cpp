#include <iostream> 
#include <cmath> //math functions
#include <fstream> // File I/O
#include <string> //handels strings
#include <iomanip> //setprecision
#include <stdlib.h> //for rand()
#include <time.h> //for rand()
#include "funcLib.h"

using namespace std;
extern const int ENTRIES;
void initialize () // initialize function
{
    cout << "327: Introduction to Software Engineering " << endl;
    
    cout << "Fall 2016" << endl;
    
    cout << "Programming Assignment 2" << endl;
    
    cout << "Maximum computation is: " << ENTRIES << endl;
    
}

bool checkCode ( char command )

{
    command = toupper( command ); // make the command an upper case
    
    if ( command == 'U' || command == 'C' || command == 'R' || command == 'D' || command == 'L' || command == 'S' || command == 'N' || command == 'E' || command == 'A' || command == 'Y' || command == 'P' || command == 'O' || command == 'Q')
    {
        return true; // if valid command returns to the main function
    }
    
    else
    {
        cout << "Not a valid command..." << endl;
        
        return false; // if not valid command go back to command code
        
    }
    
    
}

int Square ( double first , double last , double delta  )

{
    double value = 0;
    double i = 0;
    int count = ENTRIES; //Copies maximum calculation # so that it decreaments everytime a loop is run
    
    
    
    for ( i = first ; i <= last ; )
    {
        
        value = i * i;
        
        cout << "Area of square with side length " << fixed << setprecision(2) << i << " = " << fixed << setprecision(4) << value << endl;
        
        i = i + delta;
        
        count--; // -1 to count
        
        if ( count == 0 ) //if maximum calculation is done, break out of the function
        {
            break;
        }
        
    }
    cout << endl;
    return 0;
}

int Circle ( double first , double last , double delta )

{
    double value = 0;
    double i = 0;
    int count = ENTRIES; //basically the same function except for the math inside of it 
    
    
    
    for ( i = first ; i <= last ; )
    {
        
        value = 6.28 * i;
        
        cout << "Circumference with radius "<< fixed << setprecision(2) << i << " = "<< fixed << setprecision(4) << value << endl;
        
        i = i + delta;
        
        count--;
        
        if ( count == 0 )
        {
            break;
        }
        
        
    }
    cout << endl;
    return 0;

}

int Sqrt ( double first , double last , double delta)

{
    double value = 0;
    double i = 0;
    int count = ENTRIES;
    
    
    
    for ( i = first ; i <= last ; )
    {
        
        value = sqrt(i); //sqrt cmath function
        
        cout << "Square root with number "<< fixed << setprecision(2) << i << " = "<< fixed << setprecision(4) << value << endl;
        
        i = i + delta;
        
        count--;
        
        if ( count == 0 )
        {
            break;
        }
        
    }
    cout << endl;
    return 0;
    
}

int OddNum ( double first , double last , double delta)

{
    double value = 0;
    int i = 0;
    int count = ENTRIES;
    int wut = (int)last/2;
    
    cout << "Odd numbers from "<< fixed << setprecision(2) << first << " to "<< fixed << setprecision(2) << last << " = ";
    
    for ( i = first ; i <= last ; i++ )
    {
        
        
        
        
        int odd = i % 2; // Decides if its a odd number or not by %
            
            
        if ( odd == 1 ) //if odd number print on screen
        {
            cout << i << " " ;
        }
        
        count--;


        
        if ( count == 0 )
        {
            break;
        }
        
    }
    
    cout << endl;
    return 0;
    
}

int LuckyNum ( double first , double last , double delta)

{
    double value = 0;
    double i = 0;
    int count = ENTRIES;
    
     //seed time for the rand function
    
    for ( i = first ; i <= last ; )
    {
        
        srand (i);
        value = rand() ; //create random number within 10000
        
        cout << "Lucky number of "<< fixed << setprecision(2) << i << " = "<< fixed << setprecision(4) << value << endl;
        
        i = i + delta;
        
        count--;
        
        if ( count == 0 )
        {
            break;
        }
        
    }
    cout << endl;
    return 0;
    
}

int Sin ( double first , double last , double delta)

{
    double value = 0;
    double i = 0;
    int count = ENTRIES;
    
    
    
    
    for ( i = first ; i <= last ; )
    {
        
        value = sin(i); //sin cmath function
        
        cout << "Sine of "<< fixed << setprecision(2) << i << " = " << fixed << setprecision(4)<< value << endl;
        
        i = i + delta;
        
        count--;
        
        if ( count == 0 )
        {
            break;
        }
        
    }
    cout << endl;
    return 0;
    
}

int Cos ( double first , double last , double delta)

{
    double value = 0;
    double i = 0;
    int count = ENTRIES;
    
    
    
    for ( i = first ; i <= last ; )
    {
        
        value = cos(i); //cos cmath function
        
        cout << "Cosine of " << fixed << setprecision(2) << i << " = " << fixed << setprecision(4)<< value << endl;
        
        i = i + delta;
        
        count--;
        
        if ( count == 0 )
        {
            break;
        }
        
    }
    cout << endl;
    return 0;
    
}

int Exp ( double first , double last , double delta)

{
    double value = 0;
    double i = 0;
    int count = ENTRIES;
    
    
    
    for ( i = first ; i <= last ; )
    {
        
        value = exp(i); //exponential cmath function
        
        cout << "Exponential of " << fixed << setprecision(2) << i << " = " << fixed << setprecision(4) << value << endl;
        
        i = i + delta;
        
        count--;
        
        if ( count == 0 )
        {
            break;
        }
        
    }
    cout << endl;
    return 0;
    
}

int Log ( double first , double last , double delta)

{
    double value = 0;
    double i = 0;
    int count = ENTRIES;
    
    
    
    for ( i = first ; i <= last ; )
    {
        
        value = log(i); //log cmath function
        
        cout << "Natural logarithm of "<< fixed << setprecision(2) << i << " = " << fixed << setprecision(4)<< value << endl;
        
        i = i + delta;
        
        count--;
        
        if ( count == 0 )
        {
            break;
        }
        
    }
    cout << endl;
    return 0;
    
}

double findNyanCatValue (double first, double last, double delta)
{
    double value = 0;
    double value2 =0;
    double i = 0;
    int count = ENTRIES;
    
    
    
    for ( i = first ; i <= last ; )
    {
        
        
        value = pow((3*i),i);
        
        value2 = value + i;
        
        if (first == last) // when called by writetofille function it skips cout and returns value2
        {
            return value2;
        }
        
        cout << "Nyan Cat Value of " << fixed << setprecision(2)<< i << " = " << fixed << setprecision(4) << value2 << endl;
        
        i = i + delta;
        
        count--;
        
        if ( count == 0 )
        {
            break;
        }
        
        }
        cout << endl;
        return value2;
    
    
}



void writeDataToFile(const char*  textfilename)
{
    srand (time(NULL));
    int a;
    int b;
    int c;
    
    a = rand() % 20; // 0 to 20
    b = rand() % 32 + 45; // 45 to 76
    c = rand() % 6 + 5; // 5 to 10
    
    
    
    ofstream myfile;
    myfile.open(textfilename); //write a txt file names variable textfilename
    for (int i = a ; i<=b ; )
    {
        
        myfile << "Nyan Cat Value of " << fixed << setprecision(2)  << i << "=" <<  findNyanCatValue(i,i,c) << endl; //one line at a time
        
        i= i+c;
    }
    myfile.close();
    cout << "file has been written..." << endl;
    
    
}
void readDataFromFile(const char*  textfilename)
{
    ifstream input(textfilename,ios::in);
    
    char command;
    double first;
    double last;
    double delta;
    int status;
    
    while(!input.eof())
    {
        

        input >> command >> first >> last >> delta;
        

        cout << "Successfully read data from file: Code " << command << " First " << first <<" Finish " << last <<" Delta " << delta << endl;
        
        
        status = checkCode( command );
        
        
        
        
        
        if ( status == 1 ) // go through similar function as main function so that it interprets variables as input
            
        {
            command = toupper( command );
            if(command == 'O' )           // sort command O,Q,P so it doesnt go thorugh parameters
            {
                const char * textname= "q1Output.txt";
                
                writeDataToFile(textname);
                continue;
            }
            if ( command == 'P')
            {
                readDataFromFile("q1Input.txt");
            }
            if ( command == 'Q')
            {
                break;
            }
            
            
            if ( last < first || delta < 0 )
            {
                cout << "No computation needed" <<endl;
                cout<<endl;
                continue;
            }
            
            if ( command == 'U')
            {
                Square ( first , last , delta );
            }
            
            if ( command == 'C')
            {
                Circle ( first , last , delta );
            }
            
            if ( command == 'R')
            {
                Sqrt ( first , last , delta );
            }
            
            if ( command == 'D')
            {
                OddNum ( first , last , delta);
            }
            
            if ( command == 'L')
            {
                LuckyNum ( first , last , delta);
            }
            if ( command == 'S')
            {
                Sin ( first, last, delta );
            }
            if ( command == 'N')
            {
                Cos ( first , last , delta);
            }
            if ( command == 'E')
            {
                Exp ( first , last , delta);
            }
            if ( command == 'A')
            {
                Log ( first, last , delta );
            }
            if ( command == 'Y')
            {
                findNyanCatValue ( first, last , delta );
            }
            
        }
        

  
    
    }


    
    
}








#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include "funcLib.h"

using namespace std;

extern const int ENTRIES = 23 ; // Set so that it can be used in multiple files

int main()
{

    char command;  //variables 
    
    int status;
    
    double first;
    
    double last;
    
    double delta;
    
    initialize(); // Initialize function to display maximum calculation and class etc..
    
    do  // Do-while loop so that it never exits untill Q is input
    {
    
    cout << "Please enter command code: ";
    
    cin >> command ;  //Enter command code
    cin.ignore(); //for getline
    
    status = checkCode( command );  //Checks if the code is valid or not . If not , return back to input command
    
    
        
   
    
    if ( status == 1 )  // Start sorting the command code to the appropriate function
    
    {
        command = toupper( command );
        if(command == 'O' )           // sort command O,Q,P so it doesnt go thorugh parameters
        {
            const char * textname= "q1Output.txt"; //Output filename
            
            writeDataToFile(textname);
            continue;
        }
        if ( command == 'P')
        {
            readDataFromFile("q1Input.txt"); //Input filename
            continue;
        }
        if ( command == 'Q')
        {   
            cout << "quitting..." << endl; //Exits program
            break;
        }
        
        cout << "Please enter command parameters: " ; // Enter parameters for function selected 
        
        string input; 

        getline(cin,input);
        

        stringstream (input) >> first >> last >> delta; //use stringstream to verify less parameters
        
        if ( last == 0 || delta == 0)
        {
            cout << "No Computation needed" <<endl;
            cout << endl;
            continue;
        }
        if ( last < first || delta < 0 )  // Sorting out cases where computation is not needed
        {
            cout << "No Computation needed" <<endl;
            cout << endl;
            continue; // Go back to entering command code
        }
        
        if ( command == 'U')  //functions
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

        first=0; //set 0 for resetting getline
        last=0;
        delta=0;
        
    }
    
      
    } while ( status == 1 || status == 0); //dont exit until command q is given
    
    
    
    
    return 0;
}

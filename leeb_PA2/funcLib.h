#ifndef funcLib_h
#define funcLib_h  // function prototypes given

extern const int ENTRIES;

void initialize();

bool checkCode ( char );

void writeDataToFile( const char *);

void readDataFromFile ( const char *);

int Square ( double , double , double );

int Circle ( double , double , double);

int Sqrt ( double , double , double );

int OddNum ( double , double , double);

int LuckyNum ( double , double, double);

int Sin ( double , double , double );

int Cos ( double , double , double);

int Exp ( double , double , double);

int Log ( double, double ,double);

double findNyanCatValue (double, double , double);

#endif 

//added some lecture notes after submission on 6/28/17



#include <iostream>                // grab input/output library
#include <iomanip>                 // for setw
using namespace std;               // shorten names, eg., std::cout -> cout

int main()
{
    
   
cout << "Hello World!" << endl;            // "Hello World" is a STRING
                                               // endl is the carriage return symbol

    cout << "This is the second line" << endl;

    cout << 300 << endl;                       //  300 is an INTEGER
    cout << scientific << 3.14519 << endl;                   //  3.14159 is a FLOAT
    cout << 'A' << endl;                       //   'A', '7', '[' are CHARACTERS
    cout << '7' << endl;
    cout << '[' << endl;

    cout << true << endl;                     //  'true' and 'false' are BOOLs
    cout << false << endl;


    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                   Nicholas Tran" << endl;
    cout << "                   Professor"     << endl;
    cout << "                   Santa Clara University" << endl;
    cout << endl;
    cout << endl;
    cout << "Phone: (408) 554 4465" << endl;
    cout << "Email: ntran@scu.edu" << endl;
  

    cout << 3123475.678 << endl;  // fixed, scientific format

    cout << setw(10) << 1 << setw(5) << 2 << endl;

    cout << left << setw(10) << 1 << right << setw(5) << 2 << endl;

    cout << setprecision(2) << 3.141598 << endl;
    cout << " 1 + 3 * 5 is " << 1+3*5 << endl;
    
    int sum = 0;
    for (int count = 1; count <=10; count++) //or ++count
        sum = sum+ count;
        //or sum += count;
    cout << "Sum is: " << sum << endl;

    //print only odd number from 1 to 20
    for (int count = 1; count <=20; count = count +2)  //or count += 2
        cout << count <<endl;
    
    
    int n = 0;
    int product(1);  //initialize to 1 
    cout << "Enter n you want to multiply (integer): " ;
    cin >> n;
    for (int i = 1; i <= n ; ++i)
        product *= i;
        cout << product <<endl;
    int a = 1;
    cout << "++a: " << ++a << endl;
    cout << "a++: " << a++ << endl;
    
    
    return 0;
}





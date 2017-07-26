// lecture notes for loop after submission on 6/29/17



#include <iostream>                // grab input/output library
#include <iomanip>                 // for setw
#include <cmath>

using namespace std;               // shorten names, eg., std::cout -> cout

int main()
{
    /*
    cout << setw(10) << 1 << setw(5) << 2 << endl;

    cout << left << setw(10) << 1 << right << setw(5) << 2 << endl;

    cout << setprecision(2) << 3.141598 << endl;
    */
    // ---------------------------------------------------------------------------
    double prod = 1.0;
    double frac = 0.0;
    int n ;
    cout << "Enter n: " ;
    cin >> n ;
    for ( int i = 1; i <= n; ++i)
    {
        
        prod = i * i ;
        frac += (1/ prod);
    }
    
    cout << sqrt(frac * 6.0) <<endl;  // n = 100 gives 3.13 for output, This is the value of pi^2/ 6 called Euler value
   
    
    // if we want only odd 1/1, 1/3/, 1/5 then we get pi^2/8
    for ( int i = 1; i <= n; i+= 2)
    {
        prod = i * i ;
        frac += (1/ prod);
    }
    cout << sqrt(frac * 8.0) <<endl; //then we multiply witih * 8.0 instead of 6.0
    
     // ---------------------------------------------------------------------------
    // Verify PI/2 = 2/1 + 2/3 + 4/3 + 4/5 + 4/6 + 6/5 + 6/7
    double d(1.0), nu(2.0); // initialize the denominator = 1 and numerator = 2
    
    for (int i = 1; i <= n ; ++i){
        cout << "n = " << nu << " d = " << d << endl;
        prod += nu / d;
        if(i%2 == 1)
            d += 2;
        else
            nu +=2;
    }
    cout << 2.0 * prod << endl;
    
    // ---------------------------------------------------------------------------
    // Verify PI/4 = 1/1 - 1/3 + 1/5 - 1/7 + 1/9 ....
    double sum(0.0);
    double deno(1.0);
    for (int i = 1; i <= 1000 ; ++i){
        if ( i%2 == 1)
            sum += 1.0/deno;
        else
            sum -= 1.0/deno;
        
        deno += 2;
        
    }
    cout << "PI/4 is " << 4.0 * sum << endl; // mhar nay del d nar ka    

    return 0;
    
    
    
}





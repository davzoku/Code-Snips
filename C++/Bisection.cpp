#include <iostream>
#include <iomanip>
#include <math.h>

#define f(x) (x*x*x - 4*x - 9) // range 1 & 3


//#define f(x) ((-x)*x*x - x*x + 5)   // range 1 & 2
// Limitations: this program only works if func is upward sloping. f(x0)<0, f(x1)>0
// TODO: work for downward sloping func (-x^3) f(x0)>0, f(x1)<0

using namespace std;

int main()
{
    float x0, x1, x2;
    int itr=0;
    float e = .0001;
    do {
        cout << "Bisection: Calculates root of given equation f(x)= X^3 -4X -9 \n";
        //cout << "Reference: https://www.youtube.com/watch?v=GNVNYymr_go \n";
        cout << "Given the allowed error, e=0.0001 \n";
        cout << "Enter the value for x0 and x1:";
        cin >> x0 >> x1;
        if (x0 > x1)
        cout << "\n X1 must be greater than X0, try again \n\n"; // else program will go on infinite loop
        else if ((f(x0)*f(x1)) >0)
        cout << "\n Your output is wrong, try again. \n\n";   // root is not in range, x0, x1

    }
    while (f(x0) * f(x1) > 0);{

        do{
            if (x0 > x1){
            break;} // else program will go on infinite loop
            itr++;
            x2 = (x0+x1)/2;
            if (f(x2)>0)
                x1=x2;
            else x0=x2;
            cout << "\n X2= " <<   setw(8) << setfill(' ') << x2 <<"     e= " << fabs(f(x2)) << endl;
        } while (fabs(f(x2))>e);{
            if (x0 < x1)
            cout << "\n Root =" << x2 << " and the number of iterations =" << itr;}
    }



    return 0;


}

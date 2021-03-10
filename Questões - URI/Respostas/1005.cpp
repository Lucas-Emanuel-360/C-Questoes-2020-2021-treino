#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    double A , B , c, d , e;

    c = 3.5;
    d = 7.5;

    cout << "Insira a Primeira Nota: " << endl;
    cin >> A;

    cout <<"Insira a Segunda Nota: "  << endl;
    cin >> B;

    if (A <= 10 && B <= 10)
    { 
       e = ((A * c) + (B * d))/11;

       cout <<"Sua Media E: " << e << endl;

    }

    else
    {
        cout << "A Nota maxima e 10 :)" << endl;
    }
    

    









    
}
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
double A , B , C , d , e , f , g;

    d = 2;
    e = 3;
    f = 5;

    cout << "Insira a Primeira Nota: " << endl;
    cin >> A;

    cout <<"Insira a Segunda Nota: "  << endl;
    cin >> B;

    cout <<"Insira a Terceira Nota: " << endl;
    cin >> C;

    if (A <= 10 && B <= 10 && C <= 10)
    { 
       g = ((A * d) + (B * e)+(C * f))/(d + e + f);

       cout <<"Sua Media E: " << g << endl;

    }

    else
    {
        cout << "A Nota maxima e 10 :)" << endl;
    }


}
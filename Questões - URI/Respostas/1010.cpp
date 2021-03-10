#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main ()
{

    cout << fixed << setprecision(2);

    int codigo1, codigo2 , numerop1, numerop2;
    double preco1, preco2;

    cin >> codigo1 >> numerop1 >> preco1;

    cin >> codigo2 >> numerop2 >> preco2;

    cout << "VALOR A PAGAR: R$ " <<( numerop1 * preco1 ) + (numerop2 * preco2)<<endl;


    system("pause");

    return 0;
}
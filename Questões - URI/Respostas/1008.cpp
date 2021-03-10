#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main ()
{
    int a , b;
    double c , d;

    cout << fixed << setprecision(2);

    cout << "qual o numero do funcionario: " << endl;
    cin >> a;

    cout <<"quantas horas ele trabalhou: " << endl;
    cin >> b;

    cout <<"quanto ele recebe por hora trabalhada: " << endl;
    cin >> c;

    d = b * c; 

    cout << "NUMBER = " << a << endl <<"SALARY =  U$ " << d << endl;


    return 0;


    system ("pause");
}
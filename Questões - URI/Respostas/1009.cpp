#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main ()
{

    double vendas, salario;
    string nome;

    cout << fixed << setprecision(2);

  
    cin >> nome;
  
    cin >> salario;

    cin >> vendas;

    cout << "TOTAL = R$ " << (0.15 * vendas ) + salario << endl;


    return 0;


}

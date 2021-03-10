#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{

float a , b , c;

cout <<"Indique seu primeiro numero: ";
cin >> a;

cout <<"Indique seu segundo numero: ";
cin >> b;

cout <<"Digite 1 para somar,digite 2 para subtrair,digite 3 para multiplicacao,digite 4 para divisao: ";
cin >> c;


if (c == 1)
{
    cout << a + b;
}

else if (c == 2)
{
    cout << a - b;
}

else if (c == 3)
{
   cout << a * b;
}

else if (c == 4)
{
    cout << a / b <<"\n";
}
system("pause");
 return 0;

}
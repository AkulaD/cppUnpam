/*------------------*/
/* Operator aritmatika */

#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b, c = 0, d = 0, e = 0, f = 0;

    cout << "masukan nilai a = ";
    cin >> a;
    cout << "masukan nilai b = ";
    cin >> b;

    c = a % b;
    d = a + b;
    e = a * b;
    f = a / b;

    cout << "hasil dari c = a % b = " << c << endl;
    cout << "hasil dari d = a + b = " << d << endl;
    cout << "hasil dari e = a * b = " << e << endl;
    cout << "hasil dari f = a / b = " << f << endl;

    getch();
    return 0;
}

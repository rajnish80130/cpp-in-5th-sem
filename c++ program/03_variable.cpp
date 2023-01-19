# include <iostream>
using namespace std;
int a = 10;   //global
static int d = 40;
int main ()
{
    int b = 20;   //local
    static int c = 30;    //static
    cout<< a << endl << b << endl << c << endl << d;
    return 0;
}
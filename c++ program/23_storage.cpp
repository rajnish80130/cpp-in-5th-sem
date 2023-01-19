# include <iostream>
using namespace std;
int a;   //global(extern)
int main ()
{
    int b;   //local 
    static int c;   //static variable
    register int d;  // register

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
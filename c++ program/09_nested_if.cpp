# include <iostream>
using namespace std;

int main ()
{
    int a = 50, b = 40, c = 30;
    if (a>b)
    {
        if(a > c)
        {
            cout<<a;
        }
        else
        {
            cout<<c;
        }
    }
    else
    {
        if(b > c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
    return 0;
}
# include <iostream>
using namespace std;

int main ()
{
    int i = 1;

    for(i=1;i<=10;i++)
    {
        if(i==5)
        {
            continue;
        }
        cout<<i<<ends;
    }
    return 0;
}
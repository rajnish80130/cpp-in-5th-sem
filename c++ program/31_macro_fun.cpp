# include <iostream>
#define num(a,b) ((a>b)?a:b)
using namespace std;

int main ()
{
    cout<<num(43,345)<<endl;
    cout<<num(43,35)<<endl;
    cout<<num(2243,3845)<<endl;
    cout<<num(432,345)<<endl;
    cout<<num(42223,34775)<<endl;
    return 0;
}
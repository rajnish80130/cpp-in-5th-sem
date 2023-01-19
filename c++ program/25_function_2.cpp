# include <iostream>
using namespace std;
void fun(int a,int b)
{
    a = 100;
    b = 200;

    cout<<a<<ends<<b<<endl;
}
int main ()
{
    fun(10,20);
    return 0;
}
# include <iostream>
using namespace std;
void fun()   //define
{
    int a = 10;
    static int b = 10;

    cout<<a<<ends<<b<<endl;
    a++;
    b++;
}
int main ()
{
    fun();   //calling
    fun();
    fun();
    return 0;
}
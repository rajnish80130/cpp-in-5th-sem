# include <iostream>
using namespace std;
template <class A>
void print(A x,A y)
{
    cout<<x<<ends<<y<<endl;
}
int main ()
{
    print(3,4);
    print("riya","rajnish");
    print(45.2,34.2);
    print("a","b");
    return 0;
}
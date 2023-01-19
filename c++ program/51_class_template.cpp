# include <iostream>
using namespace std;
template <class A>
class print
{
    public:
    print(A x,A y)
    {
        cout<<x<<ends<<y<<endl;
    }
};
int main ()
{
    print <int> obj(2,4);
    print <char> obj2('a','b');
    return 0;
}
#include<iostream>
using namespace std;

class con
{
    public:
    int x , y , k , l;
    public:
    con(int a,int b)   // constructor name should be same to class
    {
        x = a; y= b;
        cout<<x<<ends<<y<<endl;
    }
    con(con &ref)   // copy
    {
        k = ref.x;
        l = ref.y;
        cout<<k<<ends<<l<<endl;
    }
};
int main()
{
    con obj(100,200);
    con obj2 = obj;
    return 0;
}
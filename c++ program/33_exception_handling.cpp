# include <iostream>
using namespace std;

int main ()
{
    cout<<"Exception Handling...."<<endl;
    int a,b,c;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;

    try
    {
        if(b==0)
        throw b;
        c = a/b;
        cout<<"result: "<<c<<endl;
    }
    catch(int x)
    {
        cout<<"Can't divide be "<<x<<endl;
    }
    cout<<"Exception Ending....";
    return 0;
}
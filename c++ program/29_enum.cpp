# include <iostream>
using namespace std;

int main ()
{
    enum relative__
    {
        papa,mummy,brother,mygf,me
    };
    cout<<mygf<<endl;
    relative__ str = me;
    cout<<str;
    return 0;
}
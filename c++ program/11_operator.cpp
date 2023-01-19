# include <iostream>
using namespace std;

int main ()
{
    cout<<((10>5) && (8>=7))<<endl;  //True = 1
    cout<<((10>5) || (8<=7))<<endl;   // True = 1
    cout<<((10>5) && (8<=7))<<endl;   // False = 0
    cout<<!(10>5);   //False = 0
    return 0;
}
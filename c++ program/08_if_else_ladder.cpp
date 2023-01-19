# include <iostream>
using namespace std;

int main ()
{
    int a , b , ch;
    cout<<"Enter Two Number";
    cin>>a>>b;
    cout<<"Enter Choice";
    cin>>ch;
    if(ch == 1){
        cout<<"a + b = "<<a + b;
    }
    else if(ch == 2){
        cout<<"a - b = "<<a - b;
    }
    else if(ch == 3){
        cout<<"a * b = "<<a * b;
    }
    else if(ch == 4){
        cout<<"a / b ="<<a / b;
    }
    else{
        cout<<"Invalid";

    }
    return 0;
}
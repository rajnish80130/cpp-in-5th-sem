#include<iostream>
using namespace std;

class Person
{
    private:
    int run;
    string msg;
    public:
        void zero()
        {
            run = 50;
            cout<<"Today i score "<<run<< "runs"<<endl;
        }
        void walk()
        {
            msg = "Today i walk 10 kms";
            cout<<msg<<endl;
        }
};
int main()
{
    Person obj;
    obj.walk();
    obj.zero();
    return 0;
}
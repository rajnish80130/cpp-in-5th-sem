# include <iostream>
using namespace std;
class animal
{
    public:
    void eat()
    {
        cout<<"Animal eating....."<<endl;
    }
};
class dog : public animal
{
   public:
    void voice()
    {
        cout<<"Dog is Barking....."<<endl;
    } 
};
class cat : public animal
{
    public:
    void voice()
    {
        cout<<"meow meow....."<<endl;
    } 
};
int main ()
{
    dog obj;
    obj.eat();
    obj.voice();
    cat obj2;
    obj2.eat();
    obj2.voice();
    return 0;
}
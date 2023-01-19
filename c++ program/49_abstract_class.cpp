# include <iostream>
using namespace std;
class animal
{
    public:
    virtual void sound() = 0;
    void eat()
    {
        cout<<"Animal eating ...."<<endl;
    }
};
class dog : public animal
{
    public:
    void sound()
    {
        cout<<"waof woaf ...."<<endl;
    }
};
int main ()
{
    dog d;
    d.sound();
    d.eat();
    return 0;
}
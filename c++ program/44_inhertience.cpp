# include <iostream>
using namespace std;

class Dad
{
    protected:
    int amount;
    public:
        void input()
        {
            amount = 10000;
        }
};
class son : public Dad
{
    int money = 5000;
    public:
    void show()
    {
        cout<<money<<endl;
        cout<<amount;
    }
};
int main ()
{
    son s;
    s.input();
    s.show();
    return 0;
}
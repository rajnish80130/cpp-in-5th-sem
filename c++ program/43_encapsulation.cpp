# include <iostream>
using namespace std;

class thief
{
    private:
    string name, address;
    int mob;
    public:
    void input()
    {
        name = "Rajnsih";
        address = "Akbarpur";
        mob = 86543234;
    }
    void output()
    {
        cout<<name<<endl;
        cout<<address<<endl;
        cout<<mob<<endl;
    }
};
class police:public thief
{

};
int main ()
{
    police p;
    p.input();
    p.output();
    return 0;
}
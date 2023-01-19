# include <iostream>
using namespace std;

class riya
{
    private:
    string letter;
    public:
        void love()
        {
            letter = "i Love You";
        }
    friend void rajnish(riya r);
};
void rajnish(riya r)
{
    cout<<"Riya says Rajnish"<<ends<< r.letter;
}
int main ()
{
    riya a;
    a.love();
    rajnish(a);
    return 0;
}
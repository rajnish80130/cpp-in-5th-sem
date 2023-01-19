# include <iostream>
using namespace std;

class rajnish;

class riya
{
    private:
    int a;
    public:
    void ihave()
    {
        a = 10;
    }
    friend void goru(riya r,rajnish r2);
};
class rajnish
{
    private:
    int b;
    public:
    void ihave()
    {
        b = 20;
    }   
    friend void goru(riya r,rajnish r2);
};
void goru(riya r,rajnish r2)
{
    int c;
    c = r.a + r2.b;
    cout<<c;
}
int main ()
{
    riya a;
    a.ihave();
    rajnish b;
    b.ihave();
    goru(a,b);
}
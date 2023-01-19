# include <iostream>
using namespace std;

int main ()
{
    int age;

    cout<<"Enter Your age";
    cin>>age;

    if(age>=18)
    goto Vote;
    else
    goto notVote;

    Vote:
    cout<<"Elegible for vote";
    return 0;
    notVote:
    cout<<"Not Elegible for vote";
    return 0;
}
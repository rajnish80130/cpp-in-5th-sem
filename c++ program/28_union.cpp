# include <iostream>
using namespace std;
union stu
{
    int roll;
    char name[20];
    float marks;
};
int main ()
{
    union stu s;
    cout<<"Enter student Roll name"<<endl;
    cin>>s.roll;
    cout<<"Students Roll no : "<<s.roll<<endl;
    cout<<"Enter student name"<<endl;
    cin>>s.name;
    cout<<"Students name : "<<s.name<<endl;
    cout<<"Enter student marks"<<endl;
    cin>>s.marks;
    cout<<"Students marks : "<<s.marks<<endl;

    return 0;
}
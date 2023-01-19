# include <iostream>
using namespace std;
struct stu
{
    int marks;  // int 4 bytes
    float avg;   // float 4 bytes
    double salary;  // double 8 bytes     (4+4+8 = 16 bytes)
};
union stu2
{
    int marks;   // int 4 bytes
    float avg;   // float 4 bytes
    double salary;   // double 8 bytes   (only biggest  = 8 bytes)
};
int main ()
{
    struct stu s;
    union stu2 s2;
    cout<<"Size of structure "<<sizeof(s)<<endl;
    cout<<"Size of Union "<<sizeof(s2)<<endl;
    return 0;
}
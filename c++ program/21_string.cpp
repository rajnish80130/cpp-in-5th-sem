# include <iostream>
# include<string.h>
using namespace std;

int main ()
{
    char str[] = "Rajnish";
    char str2[] = " Kumar";
    char str3[20];
    cout<<str<<endl;

    int raj = strlen(str);  //length of string
    cout<<raj<<endl; 

    // strrev(str);    //reverse the string
    // cout<<str<<endl;

    // strcat(str,str2);   // add the string
    // cout<<str<<endl;

    strcpy(str3,str);    // copy the string
    cout<<str3<<endl;
    
    return 0;
}
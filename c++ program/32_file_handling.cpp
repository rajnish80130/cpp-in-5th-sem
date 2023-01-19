# include <iostream>
# include<fstream>
using namespace std;

int main ()
{
    fstream Newfile("C:\\Users\\rajni\\OneDrive\\Documents\\c++ program\\cppk.txt");
    cout<<"file created....";
    Newfile<<"Hii Everyone";
    Newfile.close();
    return 0;
}
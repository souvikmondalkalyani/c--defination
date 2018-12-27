#include <iostream>
#include<conio.h>
using namespace std;
class item
{
private:
    int a;
    char name[20];
public:
    void function()
    {
        cout<< "Enter the value of a"<< endl;
        cin>> a;
        cout<< "Enter the name of the student"<< endl;
        fflush(stdin);
        getline(cin,name);
    }
};
int main()
{

    return 0;
}

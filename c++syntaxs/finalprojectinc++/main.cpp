#include <iostream>
#include<conio.h>
#include<string>
#include<math.h>
#include<vector>
#include<list>
#include<tuple>
using namespace std;
class schoolname{
private:
    string schoolname;
    string schooladdress;
    double pin_NO;
    int situtatedat;
    string headofthedepertment_name;
public:
    schoolname()
    {
        cout<< "enter the value of class schoolname"<<endl;
        cout<< "Enter the schoolname"<<endl;
        fflush(stdin);
        cin>>schoolname;
        cout<< "Enter the schooladdress"<<endl;
        fflush(stdin);
        cin>>schooladdress;
        cout<< "Enter the pin_NO"<<endl;
        cin>>pin_NO;


    }

};
int main()
{

    return 0;
}

#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class man
{
private:
    int age;
    double hight;
    string name;
public:
    man(int a,double b)
    {
        man *p=new man;
        p->age=a;
        p->hight=b;
        p->name="souvik mondal";
    }
   /* man()
    {
        cout<< "enter the value of age hight and name"<< endl;
        cin>> age;
        cin>> hight;
        fflush(stdin);
        getline(cin,name);
    }*/

    void showdata()
    {
        cout<< "the age is:"<< age << endl;
        cout<< "the hight is:"<< hight<< endl;
        cout<< "the name is :"<< name<< endl;
    }
};
int main()
{
    man s2(21,6.5);
    //s1.showdata();
    s2.showdata();
    return 0;
}

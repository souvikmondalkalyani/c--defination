#include <iostream> //inharitance in c++
#include<conio.h>
using namespace std;
class grade                         //this inharitancr is called single inharitance
{
private:
    int a,b,c;
    char schoolname[20];
public:
    grade()
    {
        cout<< "enter the value of the a b c and schoolname\n";
        cin>> a >> b >> c;
        fflush(stdin);
        cin.get(schoolname,20);
    }
    void showdata()
    {
        cout<< "your entired value is :"<< endl;
        cout<< "grade A is="<<a<< "\n" << "grade B is="<< b << "\n" << "grade C is="<<  c<< "\n" << "the schoolname is:"<< "\n"<< schoolname;
    }
    void function()
    {
        showdata();
    }
};
class student:public grade
{
private:
    char names[20];
    float age;
    char address[20];
public:
    student():grade()
    {
        cout<< "Enter the value of the name age and address \n";
        fflush(stdin);
        cin.get(names,20);
        cin>> age;
        fflush(stdin);
        cin.get(address,20);
    }
    showdata()   //function overridding
    {
        cout<< "your entired values are:\n";
        cout<< "student name is:"<< names << "\n" << "student age is:" << age << "\n" << "student address is:"<< address;
    }


};
class A
{
private:
    int a;
    char j;
public:
    A(int a,char j)
    {
        this->a=a;
        this->j=j;
    }
    void showdata()
    {
        cout<< "your entired value are is:"<< a << j;
    }
};
class B:private A
{
    int s;
    int k;
    string name;
public:
    void gerdata()
    {
        cout<< "Enter the value of the varibles";

        cout<< "\nenter s="<< s << "\n enter the value of k="<< k << "\nenter the string="<< gerdata(name);
    }
    void showdata()
    {
        cout<< "the value of s variable is:="<< s;
        cout<< "the value of k varible is :="<<k;
        cout<< "the name is :="<< name;
    }
};
class C:public B
{

};
int main()
{
   student m;
   m.showdata();
   m.function();
    getch();
    return 0;
}

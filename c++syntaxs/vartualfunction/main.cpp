#include <iostream>
#include<conio.h>
using namespace std;

class student
{
private:
    int a,b;
    char c;
public:
    void function()
    {
        cout<< "enter the value of the a and b ,c "<<endl;
        cin>> a >> b >> c;
    }
    virtual void f1()
    {
        cout<< "i am in the f1 function"<< endl;
    }
};
class teacher:public student
{
public:
      void f1()
  {
      cout<< "you are in another function"<< endl;
  }
};
int main()
{
    student al,*p;
    teacher jk;
    p=&jk;
    p->f1();
    al.f1();
    return 0;
}

#include <iostream>
#include<conio.h>
using namespace std;

template<class x>class value
{
private:
    x a,b;
public:
   void getdata(x a,x b)
    {
        this->a=a;
        this->b=b;
    }
    void showdata()
    {
        cout<< "the value of a and b is :"<< endl;
        cout<< "\na="<<a << "\nb="<< b  << endl;
    }
};

int main()
{
    value<float> obj;
    obj.getdata(2.56,9.81);
    obj.showdata();
    return 0;
}

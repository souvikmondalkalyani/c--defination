#include <iostream>
#include<conio.h>
using namespace std;
class name
{
private:
    int a,b;
public:
    void function()
    {
        int k;
        cout<< "enter the value of k"<<endl;
        cin>> k;
        throw k;
    }
    char alpha()
    {
        char a;
       cout<< "you are so beautiful !!"<< endl;
       cout<< "enter the value of a in (char)"<< endl;
       cin>> a;
       return(a);
    }
};
int main()
{
     name souvik;
     //there are three typs of expection handling
     //1.try.
     //2.catch.
     //3.throw.
     int a=5;
     try
     {
         if(a==5)
            throw 10;
     }
     catch(int j)
     {
         cout<< "the value of throw value is:"<<j<<endl;
     }
     try
     {
         souvik.function();
     }
     catch(int s)
     {
         cout<< "the returning value of that function is :"<< s<< endl;
     }
     getch();
    return 0;
}

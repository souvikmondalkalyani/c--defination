#include <iostream>
#include<array>
using namespace std;

int main()
{

    array <string,10> name;
    cout<< "enter the 5 names:"<<endl;
    for(int i=0;i<5;i++)
    {
        getline(cin,name[i]);
    }
    for(int i=0;i<5;i++)
    {
        cout<< "the "<<i<< " name is:="<<name[i];
        cout<< "\n";
    }
   array <int,5> val={2,2,5,6,9};
   array <int,5> val1={2,8,6,9,4};
   val.swap(val1);
   for(int i=0;i<5;i++)
   {
     cout<< val[i]<<endl;
     cout<< "\n";
     cout<< val1[i]<<endl;
   }
   cout<<val.front()<<endl;;
   cout<<val.back()<<endl;
   cout<<val.size()<<endl;
   val1.fill(10);
   for(int i=0;i<5;i++)
   {
       cout<< val1[i]<<endl;
   }

    return 0;
}

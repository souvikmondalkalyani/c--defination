#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int,float>val;
    val[100]=78.009;
    val[120]=99.8;
    val[130]=97.998;
    val[140]=1008.9;
    val[908]=789.0987;
    map<int,float>::iterator a1=val.begin();
    while(a1!=val.end())
    {
        cout<< a1->second<<endl;
        a1++;
    }
    return 0;
}

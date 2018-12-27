#include <iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple<int,int,char,string>var;
    var=make_tuple(22,33,'A', "souvik");
    for(int i=0;i<3;i++)
    {
        cout<<get<i>(var)<<endl;
    }
    return 0;
}

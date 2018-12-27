#include <iostream>
#include<conio.h>
#include<fstream>
using namespace std;
/*template<class x> class car
{
private:
    x a,b;
public:
    void desine()
    {

    }
    void ragulation()
    {

    }
    int changegear()
    {

    }
    void alarm()
    {

    }
};*/
int main()
{
    ofstream obj;
    obj.open("myfile.txt",ios::app);
    int position;
    cout<<obj.tellp();
    obj.seekp(2);
    cout<< obj.tellp();
    obj<< "hello how are you!!";
    obj.seekp(-2,ios_base::cur);
    obj<< "i will fuck you!!\n";
    obj.close();
    getch();
    return 0;
}

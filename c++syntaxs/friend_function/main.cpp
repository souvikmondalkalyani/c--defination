#include <iostream>

using namespace std;
class name
{
private:
    int a,b;
    char c;
public:
    void getdata()
    {
      cout<< "enter the value of a and b"<<endl;
      cout<< "enter a for integer b for integer and c for char"<<endl;
      cin>> a>> b>> c ;
    }
    void showdata()
    {
        cout<< "\nA=" <<a<< "\nB=" <<b<< "\nC=" <<c;
    }
 friend name operator+(name,name);
 friend ostream& operator<< (ostream&,name);
 friend istream& operator>> (istream&,name&);
};
ostream& operator<< (ostream &k,name j)
{
    cout<< "\na="<< j.a<< "\nb="<< j.b;
    return(k);
}

istream& operator>> (istream &m,name &s)
{
    cout<< "enter the value of a and b";
    cin>>s.a>>s.b;
    return(m);
}
name operator+(name j,name k)
{
    name temp;
    temp.a=j.a+k.a;
    temp.b=j.b+k.b;
    return(temp);
}
int main()
{
    name o1,o2;
    o1.getdata();
    o2.getdata();
    name o3;
    o3=o1+o2;
    o3.showdata();
    cin>>o1;
    cout<<o1;
    getchar();
    return 0;
}

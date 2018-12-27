#include <iostream>
#include<conio.h>
using namespace std;
class obj
{
private:
    int a;int b;
public:
     void getdata()
    {
        cout<< "enter the value of a and b"<<endl;
        cin>>this->a;
        cin>>this->b;
    }
    void showdata()
    {
        cout<< "your entired values are:"<< this->a<< " "<<this->b<< " "<<endl;
    }
    obj operator+ (obj);
    obj operator- (obj);
};
obj obj:: operator+(obj p)
{
  obj temp;
  temp.a=this->a+p.a;
  temp.b=this->b+p.b;
  return(temp);
}
obj obj:: operator-(obj j)
{
  obj temp;
  temp.a=a-j.a;
  temp.b=b-j.b;
  return(temp);
}
int main()
{
  obj s,k,l;
  s.getdata();
  k.getdata();
  l=s+k;
  l.showdata();
  l=s-k;
  l.showdata();
   getch();
   return 0;

}

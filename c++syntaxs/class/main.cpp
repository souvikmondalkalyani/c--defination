#include <iostream>
#include<conio.h>
using namespace std;
class obj
{
private:
    int a;int b;
public:
    void getdata(int a,int b)
    {
        this->a=a;
        this->b=b;
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
obj obj:: operator- (obj j)
{
  obj temp;
  temp.a=this->a-j.a;
  temp.b=this->b-j.b;
  return(temp);
}
int main()
{
  obj s,k,l;
  s.getdata(5,6);
  s.showdata();
   l=s.operator+(k);
   l.showdata();
   l=s-k;
   l.showdata();
   getch();
   return 0;

}

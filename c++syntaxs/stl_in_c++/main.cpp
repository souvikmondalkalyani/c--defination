#include<iostream>
#include<conio.h>
#include<array>
void sweap(int *a,int *b);
using namespace std;
int main()
{
    int n;
    cout<< "enter the value of numbers that you want to enter"<<endl;
    cin>>n;
    int value[n];
    for(int i=0;i<n;i++)
    {
        cout<< "enter the value of index "<<i+1<<"=";
        cin>>value[i];
    }

   for(int i=0;i<n-1;i++)
    for(int j=0;j<n-1-i;j++)
   {
       if(value[j]>value[j+1])
       {
           sweap(&value[j],&value[j+1]);
       }
   }
   for(int i=0;i<n;i++)
   {
       cout<< "the value of index number "<<i+1<< "is="<<value[i]<<endl;
   }
   getch();
   return(0);
}
void sweap(int *a,int *b)
    {
        int temp;
        if(*a>*b)
        {
            temp=*a;
            *a=*b;
            *b=temp;
        }
    }

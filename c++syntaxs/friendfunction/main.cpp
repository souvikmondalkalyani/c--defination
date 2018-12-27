#include <iostream>
#include<conio.h>
using namespace std;
class teacher;
class student
{
private:
    string student_name;
    int age;
    float hight;
    string schoolname;
public:
    student(string name,int age,float hight,string school_name)
    {
        student_name=name;
        this->age=age;
        this->hight=hight;
        this->schoolname=school_name;
        cout<< "The value are gained in the constractor"<<endl;
    }
   friend void showdata(student,teacher);
};
class teacher
{
private:
    string teacher_name;
    string school_name;
    string depertment;
    int age;
    string specalization;
public:
    teacher()
    {
        cout<< "enter the teachar name"<<endl;
        fflush(stdin);
        getline(cin,teacher_name);
        cout<< "enter the schoolname"<<endl;
        fflush(stdin);
        getline(cin,school_name);
        cout<< "enter the depertment name"<<endl;
        fflush(stdin);
        getline(cin,depertment);
        cout<< "enter the age of the teacher"<<endl;
        cin>>age;
        cout << "enter the specalization of the teacher"<<endl;
        fflush(stdin);
        getline(cin,specalization);
    }

    friend void showdata(student,teacher);
};
void showdata(student o1,teacher o2)
{
    cout<< "teacher name is:="<<o2.teacher_name<<endl;
    cout<< "student name is :="<<o1.student_name<<endl;
    cout<< "student school name is:="<<o1.schoolname<<endl;
    cout<< "student age is="<<(int)o1.age<<endl;
    cout<< "student hight is="<<o1.hight<<endl;
    cout<< "teacher schoolname is:="<<o2.school_name<<endl;
}

int main()
{
    student s1( "souvik",21,5.6,"pannalal institution");
    teacher s2;
    showdata(s1,s2);
    return 0;
}

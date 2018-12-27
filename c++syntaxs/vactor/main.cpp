#include <iostream>
#include<vector>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    vector <int> name;
    name={1,2,3,6,5,6,8,9,10};
    cout<< "the size of the vector is :"<< name.size();
    cout<< "the capacity of the vector is :"<< name.capacity()<<endl;
    name.push_back(12);
    name.pop_back();
    cout<< "the first element is :"<<name.front();
    cout<< "the last element is :"<< name.back()<<endl;
    vector <int> ::iterator n=name.begin();
    name.insert(n+2,26);
    for(int i=0;i<name.size();i++)
    {
        cout<< "the element of index is "<< i+1 <<name[i]<<endl;
    }

    return 0;
}

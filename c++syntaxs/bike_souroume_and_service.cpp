#include <iostream>
#include<fstream>
#include<conio.h>
#include<array>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class bike
{
	private:
		string nameofuserholder;
		string addressofuserholder;
		int modelnumber; // represents the modelnumber of the bike
		int chasis_number; //b represents the chasis number;
		string year_of_manufactor; //manufacror date
		int numberofscroue; //
		double numberofgear;
		string numberplatenumber;
		string polacinumber;
		int expiarydate;
		int number_of_serviceing;
		array<int,6>serviceing_number;
		string air_polutation_polaci_number;
		string bikename;
		int bikekeypattern;
	public:
		bike()
		{
			cout<< "you have not pass customar name "<<endl;
			cout<< "\n\n\n";
		}

		bike(string customar_name)
		{
            nameofuserholder=customar_name;
			cout<< "enter the address of userholder"<<endl;
			getline(cin,addressofusrerholder);
			cout<< "enter the modelnumber"<<endl;
			cin>>modelnumber;
			cout<< "enter the chasis number"<<endl;
			cin>> chasis_number	;
			cout<< "enter the year of manufactor"<<endl;
			getline(cin,year_of_manufactor);
			cout<< "enter the numberofscroue"<<endl;
			cin>> numberofscroue;
			cout<<"Enter the value of your number plate"<<endl;
			cin>> numberplatenumber;
			cout<< "enter the value of polacinumber"<<endl;
			getline(cin,polacinumber);
			cout<< "enter the exparidate"<<endl;
			cin>> expiarydate;
			cout<< "enter the number of serviceing"<<endl;
			cin>> number_of_serviceing;
			for(int i=0;i<6;i++)
			{
				cout<< "Enter the service tag number["<< i+1 <<"]=";
				cin>> servicetag[i];
			}
			cout<< "enter the value of air polutation number"<<endl;
			getline(cin,air_polutation_polaci_number);
			cout<< "Enter the name of the bike that customar buy"<<endl;
		    getline(cin,bikename);
			cout<<  "Enter the bike key pattern"<<endl;
			cin>>bikekeypattern;
		}
		void bikewash();
		void bikeservice(int service_number);
		void assamble_in_center();
		void insurence_of_bike();
		string crime_sofisticated_bike(int bike_number);
		class employee
		{
			public:
				string employee_name;
				int employee_age;
				string address;
				double emp_id;
				string department;
            employee()
            {
                cout<< "enter the employee name"<<endl;
                getline(cin,employee_name);
                cout<< "Enter the employee age"<<endl;
                cin>> employee_age;
                cout<< "Enter the employee address"<<endl;
                getline(cin,address);
                cout<< "Enter the emp_id"<<endl;
                cin>> emp_id;
            }
            void salary(string employee_name)
            {
                cout<< "Enter the salary of "<<employee_name<<"is"<<endl;
                double sal;
                cin>>sal;
                cout<< "the salary of " <<employee_name<< "is:="<<sal;
                cout<< "enter the employee department"<<endl;
                getline(cin,department);
            }
            void insuarance(string employee_name)
            {
               cout<< "Enter the polacinumber of the "<< employee_name << "is";
               double policy_num;
               cin>> policy_num;
            }


		};
		class parts_importe
		{
        private:
            int number_of_chasis;
            int number_of_handles;
            array<string,6>inginetype;
            int number_of_tiar;
        public:
            parts_importe()
            {
                cout<< "enter the number_of_chasis in your store"<<endl;
                cin>> number_of_chasis;
                cout<< "enter the number_of_handles that you import"<< endl;
                cin>>number_of_handles;
                for(int i=0;i<6;i++)
                {
                    cout<< "Enter the ingine type in your store(in string)"<<endl;
                    cin>> inginetype[i];
                }
            }

		};


};
int main()
{

	return 0;
}

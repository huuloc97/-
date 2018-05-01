#include <iostream>
using namespace std;
#include <string>
#include <stdio.h>

class employee
{
private:
    int day,month,year;
   
public:
    int etype;
    char status[20];
    employee()
    {
    day=0;
    month=0;
    year=0;
    etype;
    }
   
    void years (int c)
    {
    year=year+c;
    }


    void days(int a)
    {
        day=a;
    if (day>30)
     {
        month=month+1;
        day=day-30;
     }

    }

    void months(int b)
    {
        month=b;
        if(month>12)
        {
        year=year+1;
        month=month-12;
        }
    }
   
    void show(int type)
    {
        cout<<"Enter type of employee: "<<endl;
        if (type==1)
        {
            cout<<"manager"<<endl;
        }
        if(type==2)
        {
            cout<<"secretary"<<endl;
        }
        if(type==3)
        {
            cout<<"laborer"<<endl;
        }
        cout<<"Ngay thue"<<endl;
        cout<<day<<" : "<<month<<" : "<<year<<endl;
   
   
    }
};

int main()
{   
    int em,day,month,year,type;
    employee emp[25];
    enum types{manager,secretary,laborer};
    cout<<"Enter number of employee"<<endl;
    cin >> em;
    for(int e=0;e<em;e++)
    {
        cout<<"type of employee"<<endl;
        cout<<"1-manager\n";
        cout<<"2-secretary\n";
        cout<<"3-laborer\n";
        cin>>type;

        cout<<"Hired Date"<<endl;
        cout<<"Enter of day"<<endl;
        cin>>day;
        cout<<"Enter of month"<<endl;
        cin>>month;
        cout<<"Enter of year"<<endl;
        cin>>year;
   
    emp[e].days(day);
    emp[e].months(month);
    emp[e].years(year);
    emp[e].show(type);
    }
}

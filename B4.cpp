#include <iostream>
#include <conio.h>
using namespace std;

class employee{
 private:
  int emp_num;
  float emp_comp;
 public:
  void entData(){
   	cout<<"\nEnter number of employee: ";
   cin >> emp_num;
   	cout<<"\nEnter compensation: ";
   cin >> emp_comp;
  }
  void display(){
   cout << "number of employee " << emp_num << endl;
   cout << "compensation " << emp_comp << endl;
  }
};

int main()
{
 employee emp1, emp2, emp3;
 cout << "Employee one" << endl;
 emp1.entData();
 cout << "Employee two" << endl;
 emp2.entData();
 cout << "Employee three" << endl;
 emp3.entData();
 cout << "Total data:" << endl;
 emp1.display();
 emp2.display();
 emp3.display();
}


#include<iostream>
using namespace std;

class Int{
	private:
		int x;
	public:
		Int()
		{
			x=0;
		}
		void set(int a)
		{
			x=a;
		}
		int get()
		{
			return x;
		}
};
int main()
{
	Int a,b,c;
	int a1,b1,c1;
	cout<<"Enter first number: ";
	cin>>a1;
	a.set(a1);
	cout<<"Enter secont number: ";
	cin>>b1;
	b.set(b1);
	c.set(a.get()+b.get());
	cout<<"Addition: "<<c.get();
	return 0;
}

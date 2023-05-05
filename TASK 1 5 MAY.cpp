#include<iostream>
using std::cout;
using std::endl;
class Base{
	public:
		//void testFunction ();
			virtual void testFunction(); 
};

class Derived:public Base{
	public:
		void testFunction();
};
int main (void)
{
	Base*ptr= new Base;
	ptr-> testFunction();
	delete ptr;
	ptr=new Derived;
	ptr->testFunction();
	delete ptr;
	return 0;
}
void Base::testFunction()
{
	cout<<"Base class"<<endl;
}
void Derived::testFunction(){
	cout<<" Derived class"<<endl;
}

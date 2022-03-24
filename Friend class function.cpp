//WAP to make class A is friend of class B
#include<iostream>
using namespace std;
class A
{
	private: 
	       float y;
	public:
	       void read()
	      {
	      	cout<<"Any a num :";
	      	cin>>y;
	      }
	friend class B;
};
class B
{   private :float x;
	public:  
	       void read1()
	      {
	      	cout<<"Any a num :";
	      	cin>>x;
	      }
	       void display(A a)
	       {
	       	cout<<"1st num is :"<<x<<endl;
	       	cout<<"2nd num is :"<<a.y<<endl;
	       }
	       float sum(A a)
	       {
	       	float s;
	       	s=x+a.y;
	       	return s;
	       }
};
int main()
{
	A b;
	B q;
	b.read();
	q.read1();
	q.display(b);
	cout<<"sum :"<< q.sum(b)<<endl;
	return 0;
}
	

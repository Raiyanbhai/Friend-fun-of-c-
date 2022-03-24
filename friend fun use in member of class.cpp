//Find the area of circle using friend function in member of class
#include <iostream>
using namespace std;
class Circle
{
	private: 
           float r;
	public:
	  	   void getdata()
		   {
		   cout<<"Enter any radius";
		   cin>>r;
		   }
	friend void area (Circle c);
};
void area(Circle c)
{
float;
cout<<"your radius is :"<<(3.14*c.r*c.r)<<endl;
}
int main()
{
Circle c;
c.getdata();
area(c);
return 0;
}

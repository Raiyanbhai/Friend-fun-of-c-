//Write a program to add two private members of two different class using 

#include <iostream>
using namespace std;
//class A;
class B;
class A
{
	private:
	       float a;
	public:
	       A(){}
	       A(float aa)
	       { a=aa;}
    friend void add(A a1,B b2);
};

class B
{
	private:
	       float b;
	public:
	       B(){}
	       B(float bb)
	       { b=bb;}
	friend void add(A a1,B b2);
};
void add(A a1,B b2)
{
cout<<"sum is : "<<a1.a+b2.b;
}
int main()
{
A a1(4);
B b1(5);
add(a1,b1);
return 0;
}
//	*/						





/*


#include <iostream>
using namespace std; 
class A;//declaration of class A
class B;//declaration of class B
class A 
{ 
 private:
 int a; 
 public:
 A() 
 { 
 a = 0; 
 } 
 A(int aa) 
 { 
 a = aa; 
 } 
 friend void add(A obj1, B obj2); 
}; 
class B 
{ 
 private:
 int b; 
 public:
 B() 
 { 
 b = 0; 
 } 
 B(int bb) 
 { 
 b = bb; 
 } 
 friend void add(A obj1, B obj2); 
}; 
void add(A obj1, B obj2) 
{ 
 cout<<"SUM = "<<obj1.a+obj2.b<<endl; 
} 
int main() 
{ 
 A obj1(5); 
 B obj2(6); 
 add(obj1, obj2); 
 return 0; 
}
*/

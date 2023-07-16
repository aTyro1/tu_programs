#include<iostream>
#include<string>
using namespace std;
class Shape{
	public:
		virtual void area()=0;
		virtual void perimeter()=0;
};
class Square: public Shape
{
	protected:
		double a;
	public:
		Square()
		{
			a=0;
		}
		Square(double t)
		{
			a=t;
		}
		void area()
		{
			cout<<"area: ";
			cout<<(a*a)<<endl;
		}
		void perimeter()
		{
			cout<<"perimeter: ";
			cout<<(4*a)<<endl;
		}
};
class Rectangle:public Square
{
	protected:
		double b;
	public:
		Rectangle(double a,double t):Square(a)
		{
			b=t;
		}
		void area()
		{
			cout<<"area: ";
			cout<<a*b<<endl;
		}
		void perimeter()
		{
			cout<<"perimeter: ";
			cout<<2*(a+b)<<endl;
		}
};
class Circle:public Square
{
	public:
		Circle():Square()
		{}
		Circle(double r):Square(r)
		{}
		void area()
		{
			cout<<"area: ";
			cout<<(3.14*a*a)<<endl;
		}
		void perimeter()
		{
			cout<<"perimeter: ";
			cout<<(3.14*2*a)<<endl;
		}
};
class Trapezium:public Rectangle
{
	protected:
		double h,s1,s2;
	public:
		Trapezium(double a,double b,double c,double d,double e):Rectangle(a,b)
		{
			h=c;
			s1=d;
			s2=e;
		}
		void area()
		{
			cout<<"area: ";
			cout<<(a+b)*h*0.5<<endl;
		}
		void perimeter()
		{
			cout<<"perimeter: ";
			cout<<(a+b+s1+s2)<<endl;
		}
};
int main()
{
	Circle c(4.0);
	c.area();
	c.perimeter();
	Square s(10);
	s.area();
	s.perimeter();
	Rectangle r(20,10);
	r.area();
	r.perimeter();
	Trapezium t(10,10,3,30,20);
	t.area();
	t.perimeter();
	return 0;
}

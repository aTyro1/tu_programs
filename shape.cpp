#include<iostream>
#include<string>
using namespace std;
class Shape{
	private:
		string shape;
		double area,perimeter;
	public:
		Shape()
		{
			shape="none";
			area=0;
			perimeter=0;
		}
		Shape(string s_type)
		{
			shape=s_type;
			if(shape=="square")
			{
				int a;
				cin>>a;
				area=a*a;
				perimeter=4*a;
			}
		}
		void shape_properties()
		{
			cout<<"shape is: "+shape<<endl;
			cout<<area<<endl;
			cout<<perimeter<<endl;
		}
};
int main()
{
	Shape s("square");
	s.shape_properties();
	return 0;
}

#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

class Triangle:public Polygon
{
	private:
		double sideA;
		double sideB;
		double sideC;
		
		void fnCalcArea();
		void fnCalcPeri();
	public:
		Triangle(int,int,int);
};

Triangle::Triangle(int a,int b,int c)
{
	if((a+b)<=c||(b+c)<=a||(a+c)<=b)
	{
		cout<<"Invalid triangle\n";
		exit(0);
	}
	
	sideA = a;
	sideB = b;
	sideC = c;
	fnCalcPeri();
	fnCalcArea();
	return;
}

void Triangle::fnCalcPeri()
{
	perimeter = sideA+sideB+sideC;
	return;
}

void Triangle::fnCalcArea()
{
	double halfperi = perimeter/2;
	
	area = sqrt(halfperi * (halfperi -sideA) * (halfperi - sideB) * (halfperi - sideC));
	return; 
}

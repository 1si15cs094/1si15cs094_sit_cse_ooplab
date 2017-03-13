#include<iostream>
using namespace std;

class MATRIX
{
	int matrix[10][10];
	int m,n;
	
	public:
	MATRIX operator+(const MATRIX &);
	MATRIX operator-(const MATRIX &);
	MATRIX operator-();
	MATRIX operator=(const MATRIX &);
	friend istream & operator>>(istream &,MATRIX &);
	friend ostream & operator<<(ostream &,const MATRIX &);
	
};

istream & operator>>(istream &in,MATRIX &m1)
{
	int i,j;
	cout<<"Enter the order of matrix:\n";
	in>>m1.m>>m1.n;
	cout<<"Enter "<<m1.m*m1.n<<" elements:\n";
	for(i=0;i<m1.m;i++)
		for(j=0;j<m1.n;j++)
			in>>m1.matrix[i][j];

	return(in);
}

ostream &operator<<(ostream &out,const MATRIX &m1)
{
	int i,j;
	out<<"\n\n";
	for(i=0;i<m1.m;i++)
	{
		for(j=0;j<m1.n;j++)
			out<<m1.matrix[i][j]<<"\t";
		out<<"\n";
	}
	return(out);
}

MATRIX MATRIX::operator+(const MATRIX &m2)
{
	MATRIX temp;
	int i,j;
	temp.m = m;
	temp.n =n;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			temp.matrix[i][j]=matrix[i][j]+m2.matrix[i][j];
	}
	cout<<"add Done";
	return(temp);
}
MATRIX MATRIX::operator-(const MATRIX &m2)
{
	MATRIX temp;
	int i,j;
	temp.m = m;
	temp.n = n;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			temp.matrix[i][j]=matrix[i][j]-m2.matrix[i][j];
	}
	cout<<" sub Done";
	return(temp);
}

MATRIX MATRIX::operator-()
{
	MATRIX temp;
	int i,j;
	temp.m = m;
	temp.n =n; 
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			temp.matrix[i][j]=matrix[j][i];
	}
	cout<<"Transpose done";
	return(temp);
}
MATRIX MATRIX::operator=(const MATRIX &m1)
{
	
	int i,j;
	m = m1.m;
	n = m1.n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			matrix[i][j]=m1.matrix[i][j];
	}
	cout<<"Assignment done";
	return(*this);
}

int main()
{
	MATRIX m1,m2,m3;
	MATRIX m4,m5;
	
	cin>>m1;
	cin>>m2;
	
	m3 = (m1+m2);
	m4 = m1-m2;
	m5 = -m1;
	
	cout<<m1;
	cout<<m2;
	cout<<m3;
	cout<<m4;
	cout<<m5;
	
	return 0;

}

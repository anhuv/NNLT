#include <iostream>
using namespace std;
class Castle
{ 
private: int x,y;
public:
	void taoMoi(int a,int b);
	void lenTren(int z) ;
	void xuongDuoi(int z) ;
	void sangPhai(int z) ;
	void sangTrai(int z) ;
	void xuat();
}; 
void Castle::taoMoi(int a,int b)
{
	x=a, y=b;
}
void Castle::lenTren(int z) 
{ 
	
	x=x-z;
} 

void Castle::xuongDuoi(int z) 
{ 
	
	x=x+z;
} 

void Castle::sangPhai(int z) 
{ 
	
	y=y+z;
} 
void Castle::sangTrai(int z) 
{ 
	
	y=y-z;
} 
void Castle::xuat(){
	cout<<x<<","<<y<<endl;
}
int main()
{ 	
	int m,n;
	cout<<"Nhap vao vi tri (x,y)";
	cin >>m>>n;
	Castle A;
	A.taoMoi(m,n);
	A.lenTren (2);
	A.sangTrai(3);
	A.xuat ();
}


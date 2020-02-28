#include <iostream>
using namespace std;
int main ()
{
	char c;
	cout<<"Nhap mot ky tu tu ban phim: ";
	cin>>c;
	cout<<" => Ma ASCII = "<<int(c)<<endl;
	cout<<" => Ma co so 8 = "<<oct<<int(c)<<endl;
	cout<<" => Ma co so 16 = "<<hex<<int(c)<<endl;
	system("PAUSE");
}


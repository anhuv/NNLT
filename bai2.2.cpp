#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	char s[200];
	int d=0, i=-1;
	cout<<"Nhap xau s:"; fflush(stdin); gets(s);
	if(strlen(s)>200){
		cout<<"Nhap qua 200 ky tu. Nhap lai"<<endl;
		gets(s);
	}
	while (s[++i]!=0)
	if (s[i]!=' '&&(s[i+1]==' '||s[i+1]==0)) d++;
	cout << "So tu trong xau la: " << d << endl;
	system("PAUSE");
}


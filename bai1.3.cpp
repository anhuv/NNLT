#include <iostream>
using namespace std;
int main ()
{
	float r1, r2, r3, x;
	cout << "Nhap gia tri 3 dien tro: " << endl;
	cout << "R1= "; cin>>r1;
	cout << "R2= "; cin>>r2;
	cout << "R3= "; cin>>r3;
	cout << "Noi tiep an phim 0, song song an phim 1" << endl;
	cin >> x;
	while (x!=0&&x!=1){
		cout << "Noi tiep an phim 0, song song an phim 1"<< endl;
		cin >> x;
	}
	if (x==0)
		cout << "Rtd= " << r1+r2+r3 << endl;
	else
		cout << "Rtd= " << 1/(1/r1+1/r2+1/r3) << endl;
	system("PAUSE");
}


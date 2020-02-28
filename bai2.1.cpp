#include<iostream>
using namespace std;
int main ()
{
	int n, i, x;
	float R[20], Rss=0, Rnt=0;
	do{
		cout << "Nhap so luong so dien tro:";
		cin >> n;
		if (n<=0 || n>=20) cout << "Nhap lai\n";
	} while (n<=0 || n>=20);
	for (i=0; i<n; i++){
		do{
			cout << "R[" << i+1 <<"]=";
			cin >> R[i];
			if (R[i]<=0) cout << "Nhap lai" << endl;
		} while (R[i]<=0);	
	}
	for (i=0; i<n; i++) {
		Rnt+=R[i];
		Rss+=1/R[i];
	}
	cout << "Noi tiep an 1. Song song an 2" << endl;
	cin >> x;
	while (x!=1&&x!=2){
		cout << "Nhap lai" << endl;
		cin >> x;
	}
	if(x==1) cout << "Rnt= " << Rnt << endl;
	else cout << "Rss= " << 1/Rss << endl;
	system("PAUSE");
}

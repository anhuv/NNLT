#include<iostream>
using namespace std;
int main () 
{
	float a[10][10];
	float t_hang[10], t_cot[10], t=0;
	int m, n, i, j;
	cout << "Nhap kich thuoc mang:" << endl;
	cout << "So hang: "; cin >> m;
	cout << "So cot: "; cin >> n;
	for (i=0; i<m; i++) 
	for (j=0; j<n; j++){
		cout << "a[" << i<< "]" << "[" << j << "]=";
		cin >> a[i][j];
	}
	for (i=0; i<m; i++) 
	for (j=0; j<n; j++) {
		t+=a[i][j];
	}
	for (i=0; i<m; i++) {
		t_hang[i]=0;
		for (j=0; j<n; j++) t_hang[i]+=a[i][j];
	}
	for (i=0; i<m; i++)
		cout <<"Tong hang "<< i+1 << "=" << t_hang[i] << endl;
	for (j=0; j<n; j++){
		t_cot[j]=0;
		for (i=0; i<m; i++) t_cot[j]+=a[i][j];
	}
	for (j=0; j<n; j++)
		cout << "Tong cot " << j+1 << "=" << t_cot[j] << endl;
	cout << "Tong cac phan tu trong mang =" << t << endl;
	system("PAUSE");
}


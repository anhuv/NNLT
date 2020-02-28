#include<iostream>
using namespace std;

class Array{
	int n;
	int *data;
public:
	Array(int _n=0, int _d=0){
		n=_n;
		data=new int [n];
		for(int i=0;i<n;i++)
			data[i]=_d;
	} //Ham tao
	Array(const Array& a){
		n=a.n;
		data=new int[n];
		for(int i=0;i<n;i++)
			data[i]=a.data[i];
	} // Ham tao ban sao
	~Array(){
		delete[] data;
	} // ham huy
	Array& operator = (const Array& a){
		if(n!=a.n){
			n=a.n;
			delete[] data;
			data=new int[n];
		}
		for(int i=0;i<n;i++)
				data[i]=a.data[i];
		return *this;
	} // toan tu gan
public:
	void Nhap(){
		cout<<"Nhap mang: "<<endl;
		cout<<"Nhap so phan tu: ";
		int _n;
		cin>>_n;
		if(n!=_n){
			n=_n;
			delete[] data;
			data= new int[n];
		} 
		for(int i=0;i<n;i++){
			cout<<"Nhap phan tu thu "<<i+1<<": ";
			cin>>data[i];	
		}
	}//Ham nhap du lieu
	void HienThi(){
		cout<<"Hien thi mang: "<<endl;
		for(int i=0;i<n;i++) {
		cout<<data[i]<<" ";
		if(i%10==0&&i>1) 
		cout<<endl;
		}
		cout<<endl;
	}
	int getData(int i){
		return data[i];
	}
	void setData(int i, int d){
		data[i]=d;
	}
	public:
		Array operator + (Array a){
			Array t;
			t.n=(n>a.n)?n:a.n;
			t.data=new int[t.n];
			for(int i=0;i<t.n;i++){
				if(i>=n) data[i]=0;
				if(i>=a.n) a.data[i]=0;
				t.data[i]=data[i]+a.data[i];
			}
			return t;
		} // Cong 2 Array
		Array operator + (int a){
			Array t;
			t.n=n;
			t.data=new int[t.n];
			for(int i=0;i<t.n;i++)
				t.data[i]=data[i]+a;
			return t;
		} // Cong Array vs 1 so
		friend Array operator - ( Array a, Array b){
			Array T;
			T.n=b.n>a.n?b.n:a.n;
			T.data=new int[n];
			for(int i=0;i<t.n;i++){
				if(i>=b.n)b.data[i]=0;
				if(i>=a.n) a.data[i]=0;
				this->data[i]=a.data[i]-b.data[i];
			}
			return T;
		} // Tru 2 array
		 Array operator - (int a){
			Array t;
			t.n=n;
			t.data=new int[t.n];
			for(int i=0;i<t.n;i++)
				t.data[i]=data[i]-a;
			return t;
		} // tru Array vs 1 so
		Array operator * (Array a){
			Array t;
			t.n=n>a.n?n:a.n;
			t.data=new int[t.n];
			for(int i=0;i<t.n;i++){
				if(i>=n) data[i]=0;
				if(i>=a.n) a.data[i]=0;
				t.data[i]=data[i]*a.data[i];
			}
			return t;
		} /*Nhan 2 array voi quy uoc nhan cac
		phan tu tuong ung*/
		Array operator * (int a){
			Array t;
			t.n=n;
			t.data=new int[t.n];
			for(int i=0;i<t.n;i++)
				t.data[i]=data[i]*a;
			return t;
		} // Nhan Array vs 1 so
	public:
		int& operator [] (int index){
			return data[index];
		} // tra ve gia tri phan tu mang thu index
		int operator () () {
			int max=data[0];
			for(int i=1;i<n;i++)
				max=max<data[i]?data[i]:max;
			return max;
		} // lay gia tri max cua mang
	public:
		friend istream& operator >> (istream& in, Array& A ){
			cout<<"Nhap so phan tu cua mang: ";
			in>>A.n;
			for(int i=0;i<A.n;i++){
				cout<<"Nhap phan tu thu "<<i+1<<" : ";
				in>>A.data[i];
			}
		}
		friend ostream& operator << (ostream& out, const Array& A){
			for(int i=0;i<A.n;i++)
				out<<A.data[i]<<" ";
			return out;
		}
};
//Chuong trinh su dung
int main(){
	Array A;
	cout<<"Nhap mang A:"<<endl;
	cin>>A;
	cout<<"Hien thi mang A:"<<endl<<A<<endl;
	A.setData(2,5);//phan tu 2 co gia tri 5
	cout<<"Doi gia tri phan tu A[2] =5";
	cout<<"Mang A luc nay la: "<<endl<<A<<endl;
	Array B;
	cout<<"Nhap mang B:"<<endl;
	cin>>B;
	cout<<"Hien thi mang B:"<<endl<<B<<endl;
	cout<<"Hien thi mang A + B:"<<endl<<A+B<<endl;
	Array C=A+B; // su dung toan tu gan
	cout<<"Hien thi mang C =A+B bang phuong thuc trong class:"<<endl;
	C.HienThi();
	cout<<"Hien thi mang A + 1:"<<endl<<A+1<<endl;
	cout<<"Hien thi mang A - B:"<<endl<<A-B<<endl;
	cout<<"Hien thi mang B - 2:"<<endl<<B-2<<endl;
	cout<<"Hien thi mang A * B:"<<endl<<A*B<<endl;
	cout<<"Hien thi mang A * 2:"<<endl<<A*2<<endl;
	cout<<"Gia tri lon nhat trong mang A la: "<<A()<<endl;
	B[1]=10; // toan tu lay noi dung ket hop gan
	cout<<"B[1] = "<<B[1]<<endl;
	cout<<"Mang B luc nay la: "<<endl<<B<<endl;
	cout<<"Gia tri lon nhat trong mang B la: "<<B()<<endl;
}


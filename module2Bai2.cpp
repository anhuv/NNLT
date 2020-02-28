#include <iostream>
#include <cstring>
using namespace std;
class String
{
	private:
		int length;
		char *data;
	private:
		String( int length, char *data): length( length), data( data) { }
	public:
		String(): length(0), data( new char[1]){ data[0]= '\0';}
		String( const char *s)
		{
			length= strlen( s);
			data= new char[ length+ 1];
			strcpy ( data, s);
		}
		String ( const String &s);
		~String() { delete[] data;}
	public:
		int Compare( String s);
	public:
		char& operator[] (int index) { return data[ index];}
		String& operator = ( String &s);
	public:
		String operator + ( char c);
		String operator + ( String s);
	public:
		bool operator == ( String s);
		bool operator != ( String s);
		friend ostream& operator << ( ostream& out, String &s)
		{
			return out << s.data;
		}
};
String& String::operator =( String &s)
{
	delete[] this->data;
	length= s.length;
	this->data= new char[ length+ 1];
	strcpy( this->data, s.data);
	return( *this);
}
String String::operator +( char c)
{
	int length= this->length+ 1;
	char *data= new char[length+ 1];
	strcpy( data, this->data);
	data[ this->length]= c;
	data[ length]= '\0';
	return String( length, data);
}
String String::operator +( String s)
{
	int length= this->length+ s.length;
	char *data= new char [ length+ 1];
	strcpy ( data, this->data);
	for ( int i= 0; i< s.length; i++)
		data [ this->length+ i] = s[i];
	data[ length]= '\0';
	return String( length, data);
}
String::String( const String &s)
{
	this->length= s.length;
	this->data= new char[ length+ 1];
	strcpy( this->data, s.data);
}
int String::Compare( String s)
{
	return strcmp( this->data, s.data);
}
bool String::operator ==( String s)
{
	return !strcmp ( this->data, s.data);
}
bool String::operator !=( String s)
{
	return strcmp ( this->data, s.data);
}
int main ()
{
	String s ("We love ");
	String s1 = s + '!';
	cout << s1 <<'\n';
	String s2 = s + "HUST";
	cout << s2 <<'\n';
	system("pause");
}


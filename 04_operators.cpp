#include <iostream>

using namespace std;

int main() {
	int a=3,b=2;
	
	//Operators in C++:

	cout<<"Following are the operators in C++:"<<endl;
	cout<<endl;
	
	//Arithimetic operators
	
	cout<<"Arithimetic Operators:"<<endl;
	cout<<"Given: a=3, b=2"<<endl;
	cout<<"The value of a+b = "<<a+b<<endl;
	cout<<"The value of a-b = "<<a-b<<endl;
	cout<<"The value of a*b = "<<a*b<<endl;
	cout<<"The value of a/b = "<<a/b<<endl;
	cout<<"The value of a%b = "<<a%b<<endl;
	cout<<"The value of a++ = "<<a++<<endl;
	cout<<"The value of a-- = "<<a--<<endl;
    cout<<"The value of ++a = "<<++a<<endl;
    cout<<"The value of --a = "<<--a<<endl;
    
    cout<<endl;
    
    /* Assignment Operators --> use to assign values to variables:
    int a=4, b=5;
    char d='d'; */
    
    //Comparison Operators
    
    cout<<"Comparison Operators:"<<endl;
    cout<<"Given: a=3, b=2"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    
    cout<<endl;
    
    //Logical Operators
    
    cout<<"Logical Operators:"<<endl;
    cout<<"The value of this logical 'and' operator ((a==b) && (a<=b)) is "<<((a==b) && (a<=b))<<endl;
    
    cout<<"The value of this logical 'or' operator ((a!=b) || (a>=b)) is "<<((a!=b) || (a>=b))<<endl;
    
    cout<<"The value of this logical 'not' operator (!(a==b)) is "<<(!(a==b))<<endl;
    
    
    
    

	return 0;
}

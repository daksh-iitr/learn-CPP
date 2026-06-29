#include<iostream>
#include<iomanip>

  using namespace std;
  
  int main(){
      
      //Constants in C++

      int a=5;
      cout<<"The value of a was:"<<a<<endl;
      
      a=7;
      cout<<"Now, the value of a is:"<<a<<endl;
      
      const int b=9;
      //since we we used 'const int' the value of b can't be changed
      
      cout<<"The value of b will always be:"<<b<<endl;
      
      cout<<endl;
      
      //Manipulators in C++
      
      int c=2, d=14, e=1920;
      
      cout<<"The value of c without setw is:"<<c<<endl;
      cout<<"The value of d without setw is:"<<d<<endl;
      cout<<"The value of e without setw is:"<<e<<endl;
      
      cout<<endl;
      
      //Now using manipulator 'setw'
      
      cout<<"The value of c with setw is:"<<setw(4)<<c<<endl;
      cout<<"The value of d with setw is:"<<setw(4)<<d<<endl;
      cout<<"The value of e with setw is:"<<setw(4)<<e<<endl;
      return 0;
  }

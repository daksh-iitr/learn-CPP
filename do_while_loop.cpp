#include<iostream>

using namespace std;

int main(){
    
    //Do-While Loop
    
    /* Syntax:
       Do{
           c++ statements
       }while(condition);
    */
    
    //Suppose we have to print from 10 to 100
    int i=10;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=100);
    return 0;
}

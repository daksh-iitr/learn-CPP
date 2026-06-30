#include<iostream>
using namespace std;

int main(){
    
    //Selection Control Structure: Switch Case statements
    
    int age;
    cout<<"Tell your age:";
    cin>>age;
    
    switch(age){
        
        case(18):
        cout<<"Your age is 18"<<endl;
        break;
        
        case(28):
        cout<<"Your age is 28"<<endl;
        break;
        
        default:
        cout<<"No special cases"<<endl;
        break;
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
       
    //Selection Control Structure:if else-if else ladder
    
    int age;
    cout<<"Tell your age: ";
    cin>>age;
    if(age<14){
        cout<<"Sorry, You can not come to the party!"<<endl;
    }
        else if((age>=14) && (age<18)){
            cout<<"You can come to the party, but you will a get a kid pass!"<<endl;
        }
        else{
            cout<<"You can come to the party and you will get an adult pass!"<<endl;
        }

    
    return 0;
}

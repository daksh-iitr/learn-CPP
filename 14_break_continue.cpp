#include<iostream>

using namespace std;

int main(){
    
    //Demonstration of Break statement in a for loop
    
    for(int i=1; i<=5; i++){
        
        cout<<i<<endl;
        
        if(i==2){
            break;
        }
        
    }
    
     //Demonstration of Continue statement in a for loop
     
     cout<<endl;
     for(int a=1; a<=5; a++){
         
         if(a==2){
             continue;
         }
         cout<<a<<endl;
     }
    
    return 0;
}

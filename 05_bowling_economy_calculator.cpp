#include<iostream>

using namespace std;

int main(){
    
    //Bowling economy calculator
    
    int totalruns;
    int oversbowled;
    
    cout<<"Total Runs:";
    cin>>totalruns;
    cout<<"Overs Bowled:";
    cin>>oversbowled;
    cout<<"Economy:"<<(float)totalruns/oversbowled<<endl;
    
    return 0;
}

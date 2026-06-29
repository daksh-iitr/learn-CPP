#include <iostream>

using namespace std;

int main(){
    char continuerunning = 'y';
    int gymreps = 0;
    //This loop runs as long as continuerunning = 'y' or 'Y'
    while(continuerunning == 'y' || continuerunning == 'Y')
    {
        gymreps += 10;
        cout<<"You have completed "<<gymreps<<" total lifting reps so far!"<<endl;
        cout<< "Do you want to do another set?(y/n): ";
        cin>>continuerunning;
    }
    
    cout<<"Great workout session! Total reps completed: "<<gymreps<<endl;
    return 0;
}

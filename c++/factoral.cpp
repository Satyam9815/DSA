
#include<iostream>
using namespace std;
int main(){
    int i,a,fact=1;
    cout<<endl<<"enter any number : ";
    cin>>a;
    for(i=a;i>=1;i--){
        fact=fact*i;
        
    }
        cout<<endl<<"the factorial of the number = "<<fact;
        return 0;
        

}
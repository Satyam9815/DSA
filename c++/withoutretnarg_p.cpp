#include<iostream>
using namespace std;
void multi();

int n;

int main()
{
    cout<<endl<<"Enter no :";
    cin>>n;

    multi();

    return 0;
}
void multi()
{
    int i,ans;

    for(i=1;i<=10;i++)
    {
        ans=n*i;
        cout<<endl<<n<<"  *  "<<i<<" = "<<ans;
    }
}

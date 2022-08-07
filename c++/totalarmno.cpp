#include<iostream>
#include<cmath>
using namespace std;
int armstrong();
int n;

int main()
{
 int arm;
 arm=armstrong();

 if(arm==n)
            cout<<endl<<"no is armstrong:";
 else 
     cout<<endl<<"no is not an armstrong";

     return 0;
}
  int armstrong()

  {
    int r,c,a,t,p;
    cout<<endl<<"enter a no:";
    cin>>n;

    t=n;

    c=0;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        c++;
    }
         n=t;
          a=0;
    while(n>0)
      {
        r=n%10;
        p=pow(r,c);
        a=a+p;
        n=n/10;
      }
      
      n=t;
      return(a);
  }
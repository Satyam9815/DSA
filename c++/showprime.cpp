#include<iostream>
#include<cmath>
using namespace std;

void showprime(int, int);
   {
     int s,e;
        cout<<"Enter the start: ";
        showprime(s,e);

        return 0;
    }

           void showprime(int sc,int ec)
   {
        int n,i,c;

    for(n=sc;n<=ec;n++)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                 c++;

        }
        if(c==2)
            cout<<endl<<n<<"  ";
    }

}
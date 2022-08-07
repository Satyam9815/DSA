#include <iostream>
#include<iomanip>

using namespace std;

  int main()
  {
    int i;
    char ch;

    for(i=1;i<256;i++)
    {
        ch=i;
        cout<<setw(3)<<i<<setw(3)<<ch;
    }
  }

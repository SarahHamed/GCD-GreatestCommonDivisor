#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int big=0,small=0,small2=0;
    scanf("%d %d",&small,&big);
    while(small>0)
    {
        small2=small;
        small=big%small;
        big=small2;
    }
    cout<<big<<endl;
    return 0;
}

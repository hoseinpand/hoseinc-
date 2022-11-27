#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a,b,i=2;
    int f[100];
    cin>>a;

while(1)
{
    if((i*i) <= a){
    f[i-2]=i;
    i++;
    }
    else 
    goto hy;
}
hy:
for(int t=0 ; t<= i-2 ; t++){

    if(a % f[t] == 0){
    cout<<"no";
    break;
    }
    else
    if(t==i-2)
    cout<<"yes";
}
int y;
    cin>>y;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int hcf(int n1,int n2)
{
    if(n2!=0)
        return (hcf(n2,n1%n2));
    else
        return n1;
}
int main(){
    int n1,n2;
    cout<<"Enter two integerrs";
    cin>>n1>>n2;
    cout<<"HCF = "<<hcf(n1,n2);
    return 0;
}
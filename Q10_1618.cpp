//Trailing zeros
#include<iostream>
using namespace std;

int main(){
    int n;
    int ans=0;
    cin>>n;
    for(int i=5; i<=n; i=i*5) 
    ans=ans+(n/i);
    cout<<ans<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

long long summ(int x){
    long long sum = 0;
    for(int i=1; i<=x; i++){
        sum += i;
    }   
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    long long n,m;
    cin>>n>>m;
   
        if(n>m) swap(n,m);
        
    cout<<summ(m)-summ(n-1)<<endl;
    }
}

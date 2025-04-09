#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> numbers(3);
    
    for(int i=0; i<3; i++){
        cin>>numbers[i];
    }

    int x= numbers[0];
    int y= numbers[1];
    int z= numbers[2];

    sort(numbers.begin(), numbers.end());

    for(int i=0; i<3; i++){
        cout<<numbers[i]<<endl;
    }

    cout<<endl;
    
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;



}
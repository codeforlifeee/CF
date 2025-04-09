#include<bits/stdc++.h>
using namespace std;

int main(){
  string s1, s2;
  cin>> s1 >> s2;
    int sum = 0;

  

    int lastdigitn = (s1[s1.length()-1])-'0';

    int lastdigitm = (s2[s2.length()-1])-'0';

    int sumoflastdigit = lastdigitm + lastdigitn;
  
    cout<<sumoflastdigit<<endl;

}
#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s,x ="hello";
  cin >> s;
  int i,count=0,j=0 ;
  for(i=0 ; i<s.size() ; i++){
    if(s[i]==x[j]){
        j++ ;
        count++ ;
    }
    if(count==5) {
      break;
    }
  }
  if(count==5){
    cout<<"YES"<<endl;
  }
  else{
  cout<<"NO"<<endl;
  }
}

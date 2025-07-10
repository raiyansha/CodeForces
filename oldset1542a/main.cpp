#include <iostream>

using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--){
        int n ,odd=0,even=0 ;
        cin>>n;
        n*=2;
        for(int i=0 ; i<n ;i++){
            cin>>x;
            if(x%2==0)
                even++;
            else
                odd++;
        }
        if(odd==even){
            cout<<"YES"<<endl;
        }
        else
          cout<<"NO"<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
int n,k;
cin>>n>>k;
int arr[n];
int answer=0;
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int refrence=arr[k-1];
for(int i=0;i<n;i++){
	if(arr[i]>=refrence&&arr[i])
	++answer;
}
cout<<answer;



	return 0;
}

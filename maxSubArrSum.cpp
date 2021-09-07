#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxSum(int a[],int n){
	int res = a[0];
	int max_end=a[0];
	
	for(int i=1;i<n;i++){
			max_end=max(max_end + a[i], a[i]);
			res=(res,max_end);
	}
	return res;
	
}
int main(){
int a[]={-3,8,-2,4,-5,6};
cout<<maxSum(a,6)<<endl; 
return 0;
}

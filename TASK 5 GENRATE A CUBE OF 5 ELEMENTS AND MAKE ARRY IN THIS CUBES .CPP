#include<iostream>
using namespace std;
int main(){

	int i,n;
	int a[5];
	cout<<"ENTER THE ARRY OF CUBES "<<endl;
	cin>>n;
	while (i<=n){
		a[i] = a[i]*a[i]*a[i];
	
		cout<<"ARRY OF CUBES GIVEN "<<a[i];
		i++;
	}	
		return 0;
	
}

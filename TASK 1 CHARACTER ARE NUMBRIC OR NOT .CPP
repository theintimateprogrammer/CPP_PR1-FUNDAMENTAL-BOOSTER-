#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"enter the character"<<endl;
	cin>>ch;
	if(ch>='0'&&ch<='9'){
		cout<<ch<<"is numbric"<<endl;
	}
	else {
		cout<<ch<<"is not numric"<<endl;
	}
return 0;	
}	

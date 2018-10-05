#include<iostream>

using namespace std;

int natural(int i, int n){
	
	if(i==n+1){
		return 0;
	}
	else{
		cout<<i<<endl;
		i++;
	natural(i,n);
	
	}
return 0;
}

int main(){
	int n,i;
	
	cout<<"enter the maximum number you want to print"<<endl;
	cin>>n;
	natural(1,n);
	
return 0;

}

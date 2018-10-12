//Write a C++ program to find sum of all even or odd numbers in given range using recursion.

#include<iostream>

using namespace std;

//write function
//f(n)=n+f(n-2)

int sum(int n, int i){

	if(i%2==0 && n%2==0){
		if(i<=n){
			return n+sum(n-2,i);
		}
		else{
		}
	}
	else{
		cout<<"wth"<<endl;
		i=i+1;
		n=n-1;
		return n+sum(n-2,i);
	}
}

//main function

int main(){
	int a,b;
	int n,i;
	
	cout<<"Enter the lower range."<<endl;
		cin>>a;

	cout<<"Enter the upper range."<<endl;
		cin>>b;
	
		sum(b,a);
	
		cout<<sum(b,a)<<endl;
return 9;
}

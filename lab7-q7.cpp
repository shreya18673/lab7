//Write a C++ program to check whether a number is palindrome or not, using recursion.

#include<iostream>

using namespace std;

int remainder(int n){
	int a;
	if(n%10==0){
	}
	else{ 
		a=n%10;
		cout<<a;
		int b=n/10;
//repeat the above functions by recursion
			return remainder(b);
		
	}
}

int main(){
int a,z;
	cout<<"Enter the number to see if it is a palindrome."<<endl;
	cin>>a;
	remainder(a);
	if(remainder(a)>=a && remainder(a)<=a){
		cout<<"this is a palindrome."<<endl;
	}
	else{
		cout<<"this is not a palindrome."<<endl;
	}
	/*cout<<remainder(a)<<endl;
	/*if (a==remainder(a)){
		cout<<"The number provided is a palindrome."<<endl;
	}
	else{
		cout<<"The number provided is not a palindrome."<<endl;
	}*/
return 0;
}

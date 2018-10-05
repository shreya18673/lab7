//Write a C++ program to print all natural numbers between 1 to n using recursion.
#include<iostream>

using namespace std;

//write a function

void natural(int i, int n){
//stopping condition
	if(i>n){
	}
	else{
//print a number
	cout<<i<<endl;
//increase by 1
	i++;
//repeat by recursion
	natural(i, n);
	}
}


//write a main function
int main(){
	int n,i;
//ask the user for the upper range
		cout<<"Enter the upper range."<<endl;
//take in the value given by the user
		cin>>n;
//call the function
		natural(1,n);
return 0;
}

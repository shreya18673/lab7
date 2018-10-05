#include<iostream>

using namespace std;

//Write a function to print all even numbers in the given range
void even(int i,int n, int m){
	

//stopping condition

	if(i<=n && i>=m){
	
		if(i%2==0){

//print an even number
		cout<<i<<endl;

//increase by 2
		i=i+2;

//repeat by recursion call the function itself
		even(i,n,m);
		}

		else{
		i++;
		even(i,n,m);
		}
	}
	else{
		
	}
}
//Write the main function
int main(){

	int m,n;
//ask the user for the lower range
	cout<<"Enter the lower limit."<<endl;
//take in the value given by the user
	cin>>m;
//ask the user for upper limit
	cout<<"Enter the upper limit."<<endl;
//take in the value given by the user
	cin>>n;
//call the function
		even(m,n,m);
//return
return 0;
}



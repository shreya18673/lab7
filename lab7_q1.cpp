#include<iostream>
using namespace std;
// Write a function to find power of any number using recursion.
int exp(int n,int j,int i,int m){
 //Write the neccessary conditions
  if(j==i){
    return n;
    }
  else{
    n=n*m;
    j++;
    exp(n,j,i,m);
    }
}
//write the main function
int  main(){
  
  int a;int b;int c=1;int m;
  int power(int n,int j,int i, m);
//ask the user to give 2 numbers.
	  cout<<"Enter any two numbers."<<endl;
	  cin>>a>>b;
	  m=a;
//print
  	cout<<"The power of a is"<<power(a,c,b,m)<<endl;
//return 0

return 0;
}






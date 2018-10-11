//Write a C++ program to find reverse of any number using recursion.


#include<iostream>

using namespace std;


int revno(int a){
     int n;
  	if(a<1){
		
 			return n;
     		}
  	else{
 		  n=a%10;
		  a=a/10;
  		  cout<<n;
  		  revno(a);
        }
}

//write main function

int  main(){
  int revno(int a);int a;

//ask the user for input

  cout<<"Enter the number."<<endl;

//Take in the values given by the user
  cin>>a;

//Print

  cout<<"The reverse of the given number is ";
  	revno(a);

  return 0;
}


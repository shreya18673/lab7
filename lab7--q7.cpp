#include<iostream>
using namespace std;
//Write a function to check whether a number is palindrome or not using recursion.
int palindrome(int a,int b){
    int n;
  	if(a<1){
 		return b;
     		}
  	else{
 		  n=a%10;
		  a=a/10;
  		  b=(b*10)+n;
          palindrome(a,b);
        }
}
//write the main function
int  main(){
   int k;int a;int n;int b=0;
//ask the user to enter any number
   cout<<"Enter the number."<<endl;
   cin>>a;
   k=a;n=palindrome(a,b);
//print the result
   cout<<"The reverse number is "<<n<<endl;
  
   if(n==k){
    cout<<"It's a palindrome."<<endl;
          }
   else{
    cout<<"It's not a palindrome."<<endl;
      }
   return 0;
}
  


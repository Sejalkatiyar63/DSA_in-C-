#include<iostream>
using namespace std;
 int main(){
	int num=45;
 	while(num>9){
	 
 

int rem;
int ans=0;
while(num!=0){
rem=rem%10;
num/=10;
ans=ans+rem;
}
num=ans;

}
cout<<num;

 }

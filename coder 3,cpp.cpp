#include<iostream>
using namespace std;
int main(){
	int num ,rev;
	int ans=0;
	cin>>num;
	while(num!=0){
		rev=num%10;
		num=num/10;
		ans=ans*10+rev;
		

	}
		cout<< ans;

}

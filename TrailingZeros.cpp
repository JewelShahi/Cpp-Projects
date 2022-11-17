/*
Find the factorial of the given number and print the amount of trailing zeros
6! ---> 720 return 1 (720 we have one trailing zero)
*/
#include <iostream>
using namespace std;
long zeros(long n) {
    long result = 0;
    while(n)
        result += n/=5;
    return result;
}
int main(){
	long n;
	do{
		cout<<"Enter a number:\n";
		cin>>n;
	}while(n<=0);
	cout<<"\n\nResult:\n"<<zeros(n)<<endl;
	return 0;
}

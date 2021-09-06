#include<iostream>
using namespace std;
int  Fibonacci(int n);

int main(void){
	int n;
	
	cout<<"Enter n : ";
	cin>>n;
	
	cout<<"The sum of the fibonacci series is : "<<Fibonacci(n);
	
}

int  Fibonacci(int n){
	int total[n];
	total[0]=0;
	total[1]=1;
	int tot=0;
	
	

	for(int i=2;i<n;i++){
		total[i]=total[i-2]+total[i-1];
	}
	
	for(int j=0;j<n;j++){
		tot=tot+total[j];
	}
	
	return tot;
}





#include<iostream>
using namespace std;
double calculate(int base,int exponent);

int main(void){
	int base,exponent;
	double ans;
	
	cout<<"enter the base value : ";
	cin>>base;
	
	do{

	cout<<"Enter the exponent : ";
	cin>>exponent;
	
	if(exponent<=0){
		cout<<"Enter exponent again "<<endl;
	}
	
	}while(exponent<=0);
	
	ans=calculate(base,exponent);
	cout<<"The answer is : "<<ans<<endl;
	
}

double calculate(int base,int exponent){
	double total=1;
	
	for(int i=0;i<exponent;i++){
		total=total*base;
	}
	
	return total;
}

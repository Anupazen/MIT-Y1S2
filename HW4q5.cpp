#include<iostream>
using namespace std;

int main(void){
	
	int number1,number2,max,common;
	
	cout<<"Enter value 1:";
	cin>>number1;
	
	cout<<"Enter value 2:";
	cin>>number2;
	
	if(number1>=number2){
		max=number1;
	}
	else{
		max=number2;
	}
	
	for(int i=1;i<=max;i++){
		if(number1%i==0 && number2%i == 0){
			common=i;
		}
	}
	
	cout<<"Greatest common divisor : "<<common<<endl;
		
}








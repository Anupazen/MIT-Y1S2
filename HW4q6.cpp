#include<iostream>
using namespace std;

int main(void){
	
	int number1,number2,max,common,max2=0;
	
	cout<<"Enter value 1:";
	cin>>number1;
	
	cout<<"Enter value 2:";
	cin>>number2;
	
	

	max=number2*number1;
	
	if(number1>=number2){
		max2=number1;
	}
	else{
		max2=number2;
	}
	
	
	
	for(int i=max2;i<=max;i++){
		if(number1%i==0 && number2%i == 0){
			common=i;
			break;
		}
	}
	
	cout<<" smallest common factor : "<<common<<endl;
		
}








#include<iostream>
using namespace std;

int main(void){
	
	int total=0,input,max,min;
	double avg,number,j=0;
	
	cout<<"Enter N value :";
	cin>>number;
	
	for(int i=0;i<number;i++){
		cout<<"Enter any value :";
		cin>>input;
		
		if(i==0){
			min=input;
			max=input;
		}
		
		if(input>max){
			max=input;
		}
		if(input<min){
			min=input;
		}
	}
	
	cout<<"The smallest value is : "<<min<<endl;
	cout<<"The largest value is : "<<max<<endl;
}

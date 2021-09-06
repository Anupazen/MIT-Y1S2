#include<iostream>
using namespace std;

int main(void){
	
	int total=0,input;
	double avg,number,j=0;
	
	cout<<"Enter N value :";
	cin>>number;
	
	for(int i=0;i<number;i++){
		cout<<"Enter any value :";
		cin>>input;
		
		if(input>10){
			j++;
			total=total+input;
		}
	}
	
	avg=total/j;
	cout<<"The average value is : "<<avg;
}

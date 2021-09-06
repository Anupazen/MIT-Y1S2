#include<iostream>
using namespace std;

int main(void){
	int total=0,input;
	double avg,number;
	
	cout<<"Enter N value :";
	cin>>number;
	
	for(int i=0;i<number;i++){
		cout<<"Enter any value :";
		cin>>input;
		total=total+input;
	}
	
	avg=total/number;
	cout<<"The average value is : "<<avg;
	
}

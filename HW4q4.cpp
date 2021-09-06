#include<iostream>
using namespace std;

int main(void){
	
	int total=0,max,min,min1,place=0,number=0,temp,i;
	double avg,length;
	
	cout<<"Enter N value :";
	cin>>number;
	
	int input[number],arr[number];
	
	for(i=0;i<number;i++){
		cout<<"Enter any value :";
		cin>>input[i];
	}
	
	for(i=0;i<number;i++){
		for(int j=i+1;j<number;j++){
			if(input[i]>input[j])
			{
				temp  =input[i];
				input[i]=input[j];
				input[j]=temp;
			}
		}
	}
	
	cout<<"The third smallest number is: "<<input[2]<<endl;
	
}








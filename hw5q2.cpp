#include<iostream>
using namespace std;
int time(int hours,int minutes,int seconds);

int main(void){
	
	int difference;
	int seconds1,minutes1,hours1,tot1;
	int seconds2,minutes2,hours2,tot2;
	
	cout<<"Enter time 1"<<endl<<endl;
	do{
		
		cout<<"Enter number of hours : ";
		cin>>hours1;
		
		cout<<"Enter number of minutes : ";
		cin>>minutes1;
		
		cout<<"Enter number of seconds : ";
		cin>>seconds1;
		
		if(hours1>12 || hours1<=0 || minutes1>=60 || seconds1 >=60){
			cout<<"Wrong time format detected "<<endl;
		}
		
	}while(hours1>12 || hours1<=0 || minutes1>=60 || seconds1 >=60);
	
	cout<<"\n\n\n";
	
	cout<<"Enter time 2"<<endl<<endl;
	do{
		
		cout<<"Enter number of hours : ";
		cin>>hours2;
		
		cout<<"Enter number of minutes : ";
		cin>>minutes2;
		
		cout<<"Enter number of seconds : ";
		cin>>seconds2;
		
		if(hours2>12 || hours2<=0 || minutes2>=60 || seconds2 >=60){
			cout<<"Wrong time format detected "<<endl;
		}
		
	}while(hours2>12 || hours2<=0 || minutes2>=60 || seconds2 >=60);
	
	tot1=time(hours1,minutes1,seconds1);
	tot2=time(hours2,minutes2,seconds2);
	
	if(tot1>tot2){
		difference=tot1-tot2;
	}
	else{
		difference=tot2-tot1;
	}
	
	cout<<"The time difference in seconds is : "<<difference;
	
	return 0;
}

int time(int hours,int minutes,int seconds){
	int total;
	
	if(hours==12){
		total=minutes*60+seconds;
	}
	
	else{
		total=hours*3600+minutes*60+seconds;
	}
	
	return total;

}

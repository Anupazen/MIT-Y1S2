#include<iostream>
using namespace std;
#include<math.h>
double distance(double x1,double x2,double x3,double x4);

int main(void){
	double x1,x2,y1,y2;
	
	cout<<"Enter x1 : ";
	cin>>x1;
	
	cout<<"Enter y1 : ";
	cin>>y1;
	
	cout<<"Enter x2 : ";
	cin>>x2;
	
	cout<<"Enter y2 : ";
	cin>>y2;
	
	cout<<"The distace between two points is : "<<distance(x1,x2,y1,y2);
	return 0;
}


double distance(double x1,double x2,double y1,double y2){
	
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	
}

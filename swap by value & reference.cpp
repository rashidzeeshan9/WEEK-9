#include<iostream>
using namespace std;
void swapValue(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}
void swapReference(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int num1,num2;
	cout<<"enter two numbers: ";
	cin>>num1>>num2;
	cout<<"before swapValue: num1= "<<num1<<", num 2= "<<num2<<endl;
	swapValue(num1,num2);
	cout<<"after swapValue: num1= "<<num1<<", num2= "<<num2<<endl;
	
    cout<<"before swapReference: num1= "<<num1<<", num 2= "<<num2<<endl;
	swapReference(num1,num2);
	cout<<"after swapReference: num1= "<<num1<<", num2= "<<num2<<endl;
	return 0;	
	}

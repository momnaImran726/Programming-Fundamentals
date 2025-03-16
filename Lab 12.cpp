
#include<iostream>
#include<cmath>
using namespace std;

//	                         -----------------TASK#1 : Library Functions------------------------

//int main(){

//	int a;
//	cout<<"Enter a number : ";
//	cin>>a;
//
//float ans = sqrt(a);
////cout<<ans;
////
////int ans = abs(a);
////cout<<ans;
////
////int ans = cos(a);
////cout<<ans;
////
////int ans = sin(a);
////cout<<ans;
//
////int ans = pow(a,3);
////cout<<ans;
//
////return 0;
////}

//                                       TASK#2 : Greeting Message

//void greet();
//int main(){
	//greet();
//return 0;
//}
//void greet(){
//	cout<<"Hello,Welcome to C++ functions .";
//}


//                                      TASK#2 : Even or odd


//int main(){
//	
//	int num;
//	cout<<"Enter a number : ";
//	cin>>num;
//	
//	isEven(){
//	  if(num%2==0){
//		cout<<"Number is even.";
//	}else{
//		cout<<"Number is odd.";
//	}		
//	}
//	
//	
//
//}

//                                       TASK2 : Factorial Calculation
//int factorialcal(int num);
//int main() {
//	int n;
//	cout<<"Enter the value of num to display its calculator : ";
//	cin>>n;
//	cout<<"The factorial of this number "<<n<<"is "<<factorialcal(n);
//}
//int factorialcal(int num){
//	int factorial = 1;
//	for(int i=1; i<=num; i++ ){
//		factorial *= i;
//	}
//	return factorial;
//	
//}


//                                     



//                           Task#4 : Menu Driven Program  


double add(double a, double b){return a + b;}
double subtract(double a, double b){return a - b;}
double multiply(double a, double b){return a * b;}
double divide(double a, double b)
{
	if(b==0){
		cout<<"Error! Division by zerois not allowed. "<<endl;
		return 0;
	}
	return a / b;
}
int main(){
	int choice;
	double num1 , num2;
	
	do{
		cout<<"\nCalculator Menu: \n";
		cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4.Division\n5. Exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		if(choice>=1&& choice<=4){
			
			cout<<" Enter two numbers: ";
			cin>>num1>>num2;
			
		}
		switch(choice){
			
			case 1: cout<<"Result: "<<add(num1, num2)<<endl;
			break;
			case 2: cout<<"Result: "<<subtract(num1, num2)<<endl;
			break;
			case 3: cout<<"Result: "<<multiply(num1, num2)<<endl;
			break;
			case 4: cout<<"Result: "<<divide(num1, num2)<<endl;
			break;
			case 5: cout<<"Exiting the program.\n";
			break;
			default: cout<<"Invalid choice! ";
			
		}
		
	}
	while(choice != 5);
	
	return 0;
	
}
 
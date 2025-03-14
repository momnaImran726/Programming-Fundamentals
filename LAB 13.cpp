#include<iostream>
using namespace std;
//-------------------task 1--------------------

//int main()
//{
//	int num = 20;
//	int *ptr =&num;
//	
//	cout<<"Value of num : "<<*ptr<<endl;
//	return 0;
//}


//-----------------task 2-------------------

//int main(){
//	
//	int num = 20;
//	int* ptr= &num;
//	
//	cout<<"Original Value : "<<num<<endl;
//    *ptr = 50;                //    Mofify a value
//    cout<<"Modified Value : "<<num<<endl;
//    
//     return 0;
//}

//----------------------task 3-----------------------------

//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4};
//	int* ptr = arr;
//	
//	cout<<"Array Elements: ";
//	for(int i =0; i<5; i++)
//	{
//		cout<< *(ptr + i)<<" ";
//		
//	}
//	cout<<endl;
//	
//	return 0;
//}

//---------------------task 4-------------------------
// 
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int x = 5, y =10 ;

//	cout<<" Before swapping:  x = " <<x<<" , y = "<<y<<endl;
//	swap(&x ,&y);

//	cout<<" After swapping:  x = " <<x<<" , y = "<<y<<endl;
//	
//	return 0;
//}

//------------------task 5--------------------
//int main()
//{
//	int *ptr = NULL;
//	if(ptr = NULL){
//		cout<<" Pointer is null does not point to any memory . "<<endl;
//		
//	}else
//	{
//		cout<<"Pointer holds adress: "<<ptr<<endl;
//	}
//	return 0;
//}

//----------------------Task#6----------------------------

#include <iostream>
using namespace std;

int main()
{
    int num = 35;          
    void* ptr = &num;     
    cout << "Value using void pointer: " << *(static_cast<int*>(ptr)) << endl;

    return 0;
}

//}
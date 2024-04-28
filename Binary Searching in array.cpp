
#include<iostream>
using namespace std;
int  binarysearch(int array[], int size, int num){
    //here function definition of the below function call
	int low = 0;
	int high = size - 1;
	//cout<<"high:"<<high<<"low:"<<low;
	while(low <= high){
		
		cout<<"low: "<<low<<"  "<< "high: "<<high;
		cout<<endl;
		int mid= (low+high) / 2; //find mid
		cout<<endl;
		cout<<"  mid:"<<mid<<"  "; 
		cout<<endl;
	if(array[mid]==num){
			return mid;
		}
		if(array[mid]<num){
			low=mid+1;
		}else{
		
			high= mid-1;
	}
		
	}
	return -1;
	
}
int main(){
	int array[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int size= sizeof (array) / sizeof(array[0]);
	cout<<"Array Element:-> ";
    for(int i=0; i<size; i++){
		cout<<array[i]<<"  ";
	}
	cout<<endl;
	int num;
	cout<<"Enter any above number:";
	cin>>num;
	int result= binarysearch(array, size, num); //function calling for above binarysearch
	{
		if(result==-1){       
			cout<<"Number not found try again!"<<endl;
		}else{
			
			cout<<"Number is found:"<<array[result];
		}
	}
	return 0;
}




/*#include<iostream>
using namespace std;
int binarysearch (int array[], int size, int num){
	int low = 0;
	int high = size-1;
	while(low <=  high) {
		int mid = (low + high) / 2;
		if(array[mid] == num){
			return mid;
		}
		if(array[mid] < num){
			low = mid + 1;
		}
		else{
			high = mid + 1;
		}
	}
	return -1;
}
int main(){
	int array[] = {10,20,40,50,60};

	int size = sizeof (array) / sizeof (array[0]);
	int num = 40;
	int result = binarysearch(array, size, num);//function calling
	if(result == -1){
		cout << "Element not found!";
	}
	else{	
		cout << "Element Found:" << array[result];
	}

//	cout << int('a') << endl;
//	cout << char(97) << endl;
	
	return 0;		
}*/







//mnno
/*
#include<iostream>
using namespace std;
int  binarysearch(int array[], int size, int num){
	int low=0;
	int high=size-1;
	//cout<<"low: "<<low<<" "<<"high: "<<high;
while(low <= high){
	cout<<"low: "<<low<<" "<<"high: "<<high<<"    ";
	int mid = (low + high) / 2;
	cout<<"mid:  "<<mid<<"  ";
	if(array[mid] == num){
		return mid;
	}

	
}

*/
#include<iostream>
using namespace std;
int  binarysearch(int array[], int size, int num){
    //here function definition of the below function call
	int low = 0;
	int high = size - 1;
	//cout<<"high:"<<high<<"low:"<<low;
	while(low <= high){
		
		cout<<"low: "<<low<<"  "<< "high: "<<high;
		cout<<endl;
		int mid= (low+high) / 2; //find mid
		cout<<endl;
		cout<<"  mid:"<<mid<<"  "; 
		cout<<endl;
	if(array[mid]==num){
			return mid;
		}
		if(array[mid]<num){
			low=mid+1;
		}else{
		
			high= mid-1;
	}
		
	}
	return -1;
	
}
int main(){
	int array[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int size= sizeof (array) / sizeof(array[0]);
	cout<<"Array Element:-> ";
    for(int i=0; i<size; i++){
		cout<<array[i]<<"  ";
	}
	cout<<endl;
	int num;
	cout<<"Enter any above number:";
	cin>>num;
	int result= binarysearch(array, size, num); //function calling for above binarysearch
	{
		if(result==-1){       
			cout<<"Number not found try again!"<<endl;
		}else{
			
			cout<<"Number is found:"<<array[result];
		}
	}
	return 0;
}




/*#include<iostream>
using namespace std;
int binarysearch (int array[], int size, int num){
	int low = 0;
	int high = size-1;
	while(low <=  high) {
		int mid = (low + high) / 2;
		if(array[mid] == num){
			return mid;
		}
		if(array[mid] < num){
			low = mid + 1;
		}
		else{
			high = mid + 1;
		}
	}
	return -1;
}
int main(){
	int array[] = {10,20,40,50,60};

	int size = sizeof (array) / sizeof (array[0]);
	int num = 40;
	int result = binarysearch(array, size, num);//function calling
	if(result == -1){
		cout << "Element not found!";
	}
	else{	
		cout << "Element Found:" << array[result];
	}

//	cout << int('a') << endl;
//	cout << char(97) << endl;
	
	return 0;		
}*/







//mnno
/*
#include<iostream>
using namespace std;
int  binarysearch(int array[], int size, int num){
	int low=0;
	int high=size-1;
	//cout<<"low: "<<low<<" "<<"high: "<<high;
while(low <= high){
	cout<<"low: "<<low<<" "<<"high: "<<high<<"    ";
	int mid = (low + high) / 2;
	cout<<"mid:  "<<mid<<"  ";
	if(array[mid] == num){
		return mid;
	}

	
}

*/
#include<iostream>
using namespace std;
int  binarysearch(int array[], int size, int num){
    //here function definition of the below function call
	int low = 0;
	int high = size - 1;
	//cout<<"high:"<<high<<"low:"<<low;
	while(low <= high){
		
		cout<<"low: "<<low<<"  "<< "high: "<<high;
		cout<<endl;
		int mid= (low+high) / 2; //find mid
		cout<<endl;
		cout<<"  mid:"<<mid<<"  "; 
		cout<<endl;
	if(array[mid]==num){
			return mid;
		}
		if(array[mid]<num){
			low=mid+1;
		}else{
		
			high= mid-1;
	}
		
	}
	return -1;
	
}
int main(){
	int array[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int size= sizeof (array) / sizeof(array[0]);
	cout<<"Array Element:-> ";
    for(int i=0; i<size; i++){
		cout<<array[i]<<"  ";
	}
	cout<<endl;
	int num;
	cout<<"Enter any above number:";
	cin>>num;
	int result= binarysearch(array, size, num); //function calling for above binarysearch
	{
		if(result==-1){       
			cout<<"Number not found try again!"<<endl;
		}else{
			
			cout<<"Number is found:"<<array[result];
		}
	}
	return 0;
}




/*#include<iostream>
using namespace std;
int binarysearch (int array[], int size, int num){
	int low = 0;
	int high = size-1;
	while(low <=  high) {
		int mid = (low + high) / 2;
		if(array[mid] == num){
			return mid;
		}
		if(array[mid] < num){
			low = mid + 1;
		}
		else{
			high = mid + 1;
		}
	}
	return -1;
}
int main(){
	int array[] = {10,20,40,50,60};

	int size = sizeof (array) / sizeof (array[0]);
	int num = 40;
	int result = binarysearch(array, size, num);//function calling
	if(result == -1){
		cout << "Element not found!";
	}
	else{	
		cout << "Element Found:" << array[result];
	}

//	cout << int('a') << endl;
//	cout << char(97) << endl;
	
	return 0;		
}*/







//mnno
/*
#include<iostream>
using namespace std;
int  binarysearch(int array[], int size, int num){
	int low=0;
	int high=size-1;
	//cout<<"low: "<<low<<" "<<"high: "<<high;
while(low <= high){
	cout<<"low: "<<low<<" "<<"high: "<<high<<"    ";
	int mid = (low + high) / 2;
	cout<<"mid:  "<<mid<<"  ";
	if(array[mid] == num){
		return mid;
	}

	
}

*/
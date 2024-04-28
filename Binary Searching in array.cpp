//LINEAR SEARCHING

#include<iostream>
using namespace std;
int  linearsearching(int array[], int size, int num){
	for(int i=0; i<size; i++){
		if(array[i]==num){
			return num;
		}	
	}
	return -1;
}
int main(){
	int array[]={8,9,2,4,7};
	
	int size= sizeof (array) / sizeof (array[0]);
	for(int i=0; i<size; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	int num;
	cout<<"Enter any element:";
	cin>>num;
	int result=linearsearching(array, size, num);{
	if(result==-1){
		cout<<endl;
		cout<<"Element not found!"<<endl;
	}
	else{
		cout<<endl;
		cout<<"Element found:"<<result<<endl;
	}
	
	}
	return 0;
}

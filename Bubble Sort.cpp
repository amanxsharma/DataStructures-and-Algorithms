#include <iostream>
using namespace std;

void printArray(int arr[], int n){
	for(int i = 0; i <= n-1; i++){
		cout << arr[i];
	}	
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		bool flag = false;
		for(int j = 0; j < n-1-i; j++){
			// cout <<"i = "<< i <<" j = "<< j <<" arr[j] = "<<arr[j] <<" arr[j+1] = "<<arr[j+1] <<"\n";
			if(arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
				flag = true;
			}
			
		}
		if (flag != true){
				break;
			}
	}
}

int main() {
	int arr[] = {3,6,1,8,0,9};  //input array
	int n = sizeof(arr)/sizeof(arr[0]); //to get the length of an array
	
	bubbleSort(arr, n);
	
	printArray(arr, n);
	
	return 0;
}
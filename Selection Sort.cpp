#include <iostream>
using namespace std;

void printArray(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i];
	}
}


void selectionSort(int arr[], int n){
	
	for (int i = 0; i < n; i++){
		int min = arr[i];
		int pos = i;
		for (int j = i+1; j < n; j++){
			if(arr[j] < min){
				min = arr[j];
				pos = j;
			}
		}
		int temp = arr[i];
		arr[i] = min;
		arr[pos] = temp;
	}
}

int main() {
	int arr[] = {2,7,1,8,3,0,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	selectionSort(arr, n);
	
	printArray(arr, n);
	return 0;
}
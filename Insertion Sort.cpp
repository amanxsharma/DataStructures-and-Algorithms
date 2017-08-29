#include <iostream>
using namespace std;
 
void printArray(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i];
	}
}
 
void insertionSort(int arr[], int n){
	int key, j;
	for (int i = 1; i < n; i++){
		key = arr[i];
		j = i-1;
 
		while(j >= 0 && key < arr[j]){
			arr[j+1] = arr[j];
 
				   j--;
 
		}
		arr[j+1] = key;
		// cout<<"i = "<<i<<" j = "<<j<<" arr[j+1] = "<<arr[j+1]<<" arr[j] = "<<arr[j]<<"\n";
	}
}
 
int main() {
	int arr[] = {9,1,3,0,2,6,7,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr, n);
	printArray(arr, n);
	return 0;
}
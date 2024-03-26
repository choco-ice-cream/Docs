#include <iostream> 

int searchKey(int x, int arr[]);
int findMax(int arr[]);
using namespace std;

int main() {
	int arr[10]; 

    // get array values
	for (int i = 0; i < 10; i++) {
		cout << "Enter value for index " << i << ": ";
		cin >> arr[i];
	}

    // get number to search
	int x;
	cout << "Enter number to search: ";
	cin >> x; 

    // get index if the number exists
	int index = searchKey(x, arr);

	if (index == -1) {
		cout << "Value not found" << endl; 
	} else {
		cout << "index is : " << index << endl; 
	}

    // print max value of the array
	cout << "Max value of the array: " << findMax(arr);
}

// search and return index 
int searchKey(int x, int arr[]) {
	for (int i = 0; i < 10; i++) {
		if (x == arr[i]) {
			return i;
		}
	}

	return -1;
}

// return max of an array
int findMax(int arr[]) {
	int max = arr[0];
	for (int i = 1; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	return max; 
}
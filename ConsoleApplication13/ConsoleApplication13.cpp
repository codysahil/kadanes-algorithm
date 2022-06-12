#include<iostream>
using namespace std;

int kadane(int arr[], int n) {
	int sum = 0;
	int i=0;
	int max = arr[i];
	for (i = 0; i < n; i++) {
		sum = sum + arr[i];
		if (sum > max) {
			max = sum;
		}
		else if (sum < 0) {
			sum = 0;
		}
	}
	cout << max;
	return 0;
}
int main()
{
	int arr[] = { -2. - 3,4,-1,-2,1,5,-3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	kadane(arr, n);
}
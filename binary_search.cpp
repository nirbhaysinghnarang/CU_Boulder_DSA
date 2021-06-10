#include <iostream>
using namespace std;


int my_binary_search(int *array, int element, int array_size)
{
	int left = 0;
	int right = array_size-1;
	while(left<right){
		int mid = (left+right)/2;
		if(element==array[mid]){
			return mid;
		}else if(element<array[mid]){
			right = mid-1;
		}else{
			left = mid+1;
		}
	}
	return -1;
}

int main(){
	int array[] = {1,4,3,5,6,10,21};
	int result = my_binary_search(array,10,7);
	cout << result << endl;
}

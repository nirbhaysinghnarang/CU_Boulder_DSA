#include <iostream>
using namespace std;

void insert(int *array, int index){
	for(int i=index-1;i>-1;i--){
		if(array[i]<array[i+1]){
			swap(array[i],array[i+1]);
		}
	}
}
void my_sort(int *array, int size){
	for(int i=0;i<size;i++){
		insert(array, i);
	}
}

int main(){
	int array[5] = {1,5,2,7,2};
	my_sort(array,5);
	for(int i=0;i<5;i++){
		cout << array[i];
	}
}

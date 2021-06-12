#include <iostream>
#include <vector>
using namespace std;

vector<int> twoWayMerge(int *array_1, int *array_2, int size){
	vector<int> temp;
	int index_1 = 0;
	int index_2 = 0;
	while(index_1<size && index_2<size){
		if(array_1[index_1]<=array_2[index_2]){
			temp.push_back(array_1[index_1]);
			index_1++;
		}else{
			temp.push_back(array_2[index_2]);
			index_2++;
		}
	}
	while(index_1<size){
		temp.push_back(array_1[index_1]);
		index_1++;
	}
	while(index_2<size){
		temp.push_back(array_2[index_2]);
		index_2++;
	}
	return temp;
}

int main(){
	int arr_1[3] = {1,3,10};
	int arr_2[3] = {5,2,9};

	vector<int> res = twoWayMerge(arr_1,arr_2,3);
	for(int i=0;i<6;i++){
		cout << res.at(i) << " ";
	}
	return 0;
}

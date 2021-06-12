def merge_sort(array,left,right):
	if(left<right):
		mid = (left+right)//2
		merge_sort(array,left,mid)
		merge_sort(array,mid+1,right)
		merge(array,left,right,mid)


def merge(array,left,right,mid):
	tmp = [0] * (right - left + 1)
	left_ctr = left
	right_ctr = mid+1
	tmp_index=0
	while(left_ctr<=mid and right_ctr<=right):
		if(array[left_ctr]<array[right_ctr]):
			tmp[tmp_index] = array[left_ctr]
			left_ctr+=1
			tmp_index+=1
		else:
			tmp[tmp_index] = array[right_ctr]
			right_ctr+=1
			tmp_index+=1
	while(left_ctr<=mid):
		tmp[tmp_index] = array[left_ctr]
		left_ctr+=1
		tmp_index+=1
	while(right_ctr<=right):
		tmp[tmp_index] = array[right_ctr]
		right_ctr+=1
		tmp_index+=1
	for i in range (left, right+1):
		array[i] = tmp[i-left]




arr = [14,66,22,21,91,310,201,202]
merge_sort(arr,0,len(arr)-1)
print(arr)

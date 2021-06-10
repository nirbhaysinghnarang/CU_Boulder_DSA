def binary_search(array,item):
	left = 0
	right = len(array)-1
	while(left<right):
		mid = (left+right)//2
		if(item==array[mid]):
			return (True,mid)
		if(item<array[mid]):
			right = mid-1
		else:
			left = mid+1
	return (False,-1)


arr = [3,4,6,10,24,26,34]
print(binary_search(arr,55))

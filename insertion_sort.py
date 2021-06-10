def insertion_sort(array):
	for i in range(1,len(array)):
		key = array[i]
		j = i-1
		while(j>=0 and key<array[j]):
			array[j+1] = array[j]
			j-=1
		array[j+1] = key
	return array

test = [4,3,1,2]
print(insertion_sort(test))

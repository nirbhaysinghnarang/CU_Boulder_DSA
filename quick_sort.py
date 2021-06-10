def quick_sort(array):
	if(len(array)<=1):
		return array
	else:
		pivot = array.pop()
	items_greater = []
	items_lesser = []
	for item in array:
		if(item>pivot):
			items_greater.append(item)
		else:
			items_lesser.append(item)
	return quick_sort(items_lesser) + [pivot] + quick_sort(items_greater)

print(quick_sort([10,50,30,70,80,90,110,75]))

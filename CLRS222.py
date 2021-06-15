#CLRS Chapter 2.2, Problem 2
#Selection Sort
def sel_sort(arr):
    for j in range(len(arr)):
        print('At iteration = {},\narr={}'.format(j,arr))
        min_index = j
        for k in range(j+1,len(arr)):
            if arr[min_index]>arr[k]:
                min_index = k
        arr[min_index],arr[j] = arr[j],arr[min_index]

a = [3,1,10,7,8]
sel_sort(a)
print(a)

#Loop Invariant - Consider the sub-array ARR[0...J-1]
#The Loop Invariant is that this sub-array will always be sorted
#Thus, because the loop terminates when J-1=N, the entire array is sorted and the loop is thus correct.

#Both best and worst case time complexities are Theta(N^2)

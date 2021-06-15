#add two binary numbers represented by arrays
#CLRS Chapter 2.1, Problem 4.
def problem(a1,a2):
    sum_1 = 0
    sum_2 = 0
    for j in range(0,len(a1)):
        if(a1[len(a1)-j-1]==1):
            sum_1+=2**(j)
    for i in range(0,len(a2)):
        if(a2[len(a2)-i-1]==1):
            sum_2+=2**(i)
    sum = sum_1+sum_2
    sum_arr = []
    while(sum>=1):
        sum_arr.append(sum%2)
        sum=sum//2
    for k in range(0,len(sum_arr)-1):
        sum_arr[k]=sum_arr[len(sum_arr)-1-k]
    return sum_arr

a1 = [1,0,1,0]
a2 = [0,1,1,1]
print(problem(a1,a2))

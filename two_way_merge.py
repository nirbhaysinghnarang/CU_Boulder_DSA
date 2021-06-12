def twoWayMerge(lst1, lst2):
    print(lst1,lst2)
    tmp = [0]*(len(lst1)+len(lst2))
    tmp_idx = idx_1 = idx_2 = 0
    while(idx_1<len(lst1) and idx_2<len(lst2)):
        if(lst1[idx_1]<=lst2[idx_2]):
            tmp[tmp_idx] = lst1[idx_1]
            idx_1+=1
        else:
            tmp[tmp_idx] = lst2[idx_2]
            idx_2+=1
        tmp_idx+=1
    while(idx_1<len(lst1)):
        tmp[tmp_idx] = lst1[idx_1]
        idx_1+=1
        tmp_idx+=1
    while(idx_2<len(lst2)):
        tmp[tmp_idx] = lst2[idx_2]
        idx_2+=1
        tmp_idx+=1
    return tmp

print(twoWayMerge([2,5,10],[7,8,9]))

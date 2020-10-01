def mergeSort(l, i, j) :
    if(i == j) :
        return
    elif(i == j-1) :
        if(l[i] < l[j]) :
            return
        else :
            t = l[i]
            l[i] = l[j]
            l[j] = t
        return
    mid = int((j-i)/2)
    mergeSort(l, i, mid) 
    mergeSort(l, mid+1, j)
    l3 = []
    m = i
    n = mid+1
    r = 0
    
    while(m <= mid or n <= j) :
        if(m <= mid and n <= j) :
            if(l[m] < l[n]) :
                l3.append(l[m])
                r += 1
                m += 1
            else :
                l3.append(l[n])
                r += 1
                n += 1
        elif(m > mid) :
            l3.append(l[n])
            r += 1
            n += 1
        else :
            l3.append(l[m])
            r += 1
            m += 1
    r = i
    while(r <= j) :
        l[r] = l3[r]
        r += 1
    
    return        
    
n = int(input('Enter the number of items to enter: '))
l = []
i = 0
while(i < n) :
    l.append(int(input('Enter item: ')))
    i += 1
    
mergeSort(l, 0, n-1)
i = 0
while(i < n) :
    print(l[i])
    i += 1
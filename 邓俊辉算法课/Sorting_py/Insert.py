

a=[4,2,1,4,6,2]
for i in range(0,len(a)):
    for j in range(i,-1,-1):
        if a[j]<a[j[1]]:
            a[j],a[j-1]=a[j-1],a[j]
        else:
            break
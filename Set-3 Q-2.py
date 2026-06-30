def min_trips(weight):
    weight.sort()
    i,j=0,len(weight)-1
    trips=0
    
    while i<=j:
        if weight[i]+weight[j]<=3.0:
            i+=1
        j-=1
        trips+=1
    return trips
print(min_trips([1.01, 1.99, 2.5, 1.5, 1.01]))

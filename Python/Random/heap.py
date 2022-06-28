def heapify(arr,n,i):
    largest = i
    l=2*i+1
    r=2*i+2

    if l<n and arr[i]<arr[l]:
        largest=l
    if r<n and arr[i]<arr[r]:
        largest=r
    if largest!=i:
        arr[i],arr[largest] = arr[largest],arr[i]
        heapify(arr,n,largest)

def insert(array,value):
    size=len(array)
    array.append(value)

    for i in range((size//2)-1, -1, -1):
        heapify(array, size, i)
    
arr = []

insert(arr, 1)
insert(arr, 2)
insert(arr, 3)
insert(arr, 10)
insert(arr, 20)
insert(arr, 4)
insert(arr, 5)


print ("Max-Heap array: " + str(arr))


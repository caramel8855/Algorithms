def printarray(arr):
    for element in arr: 
        print(element, end = '\t')
    print()

def merge(arr, low, mid, high):
    i = low
    j = mid+1
    k = low
    arr2 = [0]*100
    while i <= mid and j <= high :
        if arr[i] < arr[j]:
            arr2[k] = arr[i]
            i = i+1
            k = k+1
        else :
            arr2[k] = arr[j]
            j = j+1
            k = k+1
    while i <= mid : 
        arr2[k] = arr[i]
        i = i+1
        k = k+1
    while j <= high:
        arr2[k] = arr[j]
        j = j+1
        k = k+1
    for i in range(low, high+1):
        arr[i] = arr2[i]


def mergesort(arr, low, high):
    if low<high: 
        mid = (high+low)//2
        mergesort(arr,low,mid)
        mergesort(arr, mid+1, high)
        merge(arr, low , mid , high)

def main ():
    array = [5,6,7,1,2,3,4]
    printarray(array)
    print("After mergesort: ")
    mergesort(array, 0, (len(array)-1))
    printarray(array)

if __name__ == "__main__":
    main()

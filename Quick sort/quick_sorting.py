def printarray(arr):
    for element in arr:
        print(element, end='\t')
    print()

def partition(arr, low, high):
    pivot = arr[low]
    i = low+1
    j = high
    while True:
        while arr[i]<= pivot:
            i = i+1
        while arr[j]>pivot:
            j = j-1
        if i<j:
            arr[i], arr[j] = arr[j], arr[i]
        if not i<j:
            break
    arr[j], arr[low] = arr[low], arr[j]
    return j 

def quicksort(arr, low, high):
    if low<high :
        partitionIndex = partition(arr, low, high)
        quicksort(arr, low, partitionIndex-1)
        quicksort(arr, partitionIndex+1, high)
        


def main():
    array = [2,45,67,3,4,8]
    printarray(array)
    print("Afer quick sort: ")
    quicksort(array, 0, len(array) -1)
    printarray(array)

if __name__ == "__main__":
    main()
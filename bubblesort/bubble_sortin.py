def printarr(arr):
    for Element in arr:
        print(f"{Element}\t", end="")
    print()

def bubblesort(arr):
    n = len(arr)
    for i in range(n - 1):
        print(f"The pass required to sort {i+1}")
        for j in range(n - 1 - i):
            if arr[j] > arr[j + 1]:
                # swapping
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


#Best performance
def bubblesortpro(arr):
    n = len(arr)
    is_sorted = False
    for i in range(n-1):
        print(f"The pass required to sort{i+1}")
        is_sorted = True
        for j in range(n-1-i):
            if arr[j]>arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                is_sorted = False
        if is_sorted :
            return        

def main():
    array = [2, 45, 67, 34, 78, 90]
    print("Element before sorting: ")
    printarr(array)
    bubblesort(array)
    #bubblesortpro(array) 
    print("Elements after sorting: ")
    printarr(array)


if __name__ == "__main__":
    main()

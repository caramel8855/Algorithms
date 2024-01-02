def printarray(arr):
    for element in arr:
        print(element, end="\t")
    print()

def selectionsort(arr):
    for i in range(len(arr)-1):
        indexMin = i
        for j in range(i+1, len(arr)):
            if(arr[j]<arr[indexMin]):
                indexMin = j
        #swapping
        arr[i], arr[indexMin] = arr[indexMin], arr[i]        

def main():
    array = [2, 56, 42, 6, 89, 4]
    printarray(array)
    print("after selection sort: ")
    selectionsort(array)
    printarray(array)

if __name__ == "__main__":
    main()
# In this sort:
# Total passes   : n-1
# Time complexity : O(n^2)
# Stable? : No
# Adaptive? : No
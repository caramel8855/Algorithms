def printarray(arr): 
    for element in arr:
        print(element, end = "\t")
    print()    

def insertionsort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1

        while j>=0 and arr[j]>key : #arr[j]<key for decending order
            arr[j+1] = arr[j]
            j = j-1
        arr[j+1] = key

def main():
    
    array = [2, 45, 32, 7 , 10, 56]
    printarray(array)
    insertionsort(array)
    print("After insertion sorting: ")
    printarray(array)

if __name__ == "__main__":
    main()

#in this sort:
#total passes   : n-1
#time comp : O(n^2)
#in best case : O(n)
#stable? : Yes
#Adaptive? :Yes 
def printarray(arr):
    for element in arr: 
        print(element, end = '\t')
    print()

def maximumElement(arr):
    max = 0
    for element in arr:
        if element > max:
            max = element
    return max

def countsort (arr):
    max = maximumElement(arr)
    count = [0]*(max+1) 

    for element  in arr: 
        count[element] += 1 

    i = 0
    j = 0
    while i<=max :
        if count[i]>0:
            arr[j] = i
            j +=1
            count[i] -=1 
        else:
            i += 1

def main():
    array = [2,45,67,3,4,8]
    printarray(array)
    countsort(array)
    print("After countsort : ")
    printarray(array)
   
if __name__ == "__main__":
    main()
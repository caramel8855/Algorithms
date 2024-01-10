def linearSearch(arr, search):
    for i in range(len(arr)):
        if  arr[i] == search:
            print(f"Element found. Index : {i}")
            return
    print("The element does not exists in array")


def main ():
    array = [2,34,56,7,8,3,21,57,37]
    search = int(input("Enter a number that u wanna search: "))
    linearSearch(array, search)

if __name__ == "__main__":
    main()
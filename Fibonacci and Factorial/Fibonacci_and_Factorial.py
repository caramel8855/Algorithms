def fib(n):
    if n==1:
        return 1
    elif n == 0:
        return 0
    else:
        return fib(n-1)+ fib(n-2)
    
def fac(n):
    if n==0 or n==1 :
        return 1
    else:
        return n*fac(n-1)



def main():
    n = int(input("Enter the value of n: "))
    #now call the functions to apply

if __name__ == "__main__":
    main()
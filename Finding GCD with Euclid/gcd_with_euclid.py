def EuclidGCD(a, b):
    if b == 0:
        return a
    else:
        return EuclidGCD(b , a % b)


def main():
    a = int(input("Enter the first number : "))
    b = int(input("Enter the second number : "))
    gcd = EuclidGCD(a, b)
    print(f"The gcd of {a} and {b} is {gcd}")

if __name__ == "__main__":
    main()
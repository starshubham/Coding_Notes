# n! = (n-1)! * n 
# sum(n) = sum(n-1) + n

def sum_recursive(n):
    if n == 1:
        return 1
    return n + sum_recursive(n-1)

# n = int(input("Enter the number to be sum: "))
f = sum_recursive(5)
print(f)


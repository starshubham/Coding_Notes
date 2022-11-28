# n! = 1 * 2 * 3 * 4...*n
# n! = [1 * 2 * 3 * 4... n-1] *n
# n! = n * (n-1)! 

n = int(input("Enter your number: "))
# product = 1
# for i in range(n):
#     product = product * (i+1)
# print(product)

# Method-1
# def factorial_iter(n):
#     product = 1
#     for i in range(n):
#         product = product * (i+1)
#     return product

# f = factorial_iter(n)
# print(f)



# Method-2
def factorial_recursive(n):
    if n == 1 or n == 0:
        return 1
    else: 
        return n * factorial_recursive(n-1)

f = factorial_recursive(n)
print(f)


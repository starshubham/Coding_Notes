num = int(input("Enter the number: "))
for i in range(1, 11):
    # print(str(num) + "X" +str(i) + " = " + str(i*num))
    print(f"{num}X{11-i}={num*(11-i)}")
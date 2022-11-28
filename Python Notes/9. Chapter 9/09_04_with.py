with open('another.txt1', 'r') as f:
    a = f.read()
with open('another.txt1', 'w') as f:
    a = f.write("me")
print(a)
words = ["donkey", "kaddu", "mote"]

with open("sample.txt5") as f:
    content = f.read()


for word in words:
    content = content.replace(word, "$%^@$^#")
    with open("sample.txt5", "w") as f:
        f.write(content)
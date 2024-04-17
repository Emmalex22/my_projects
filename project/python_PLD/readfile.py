"""A function that reads and prints the content of a file to std output"""

def read_file(filename=""):
    with open(filename, encoding="utf-8") as f:
        print(f.read(), end="")
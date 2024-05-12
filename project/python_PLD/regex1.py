import re

name = "My name is Ikeh Emmanuel, and my dads name is leonard"
a = re.search("My", name)
b = re.findall("name", name)
c = re.match("My", name)
name = re.sub("Emmanuel", "David", name)
print(a)
print(b)
print(c)
print(name)
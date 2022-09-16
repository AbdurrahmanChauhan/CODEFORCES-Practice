s = input()
t = ""
for a in s:
    if a not in t:
        t+=a
if(t.__len__()%2==0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
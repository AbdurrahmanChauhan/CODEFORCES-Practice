year = int(input())+1
ans = True
while ans:
    string = str(year)
    for c in string:
        if string.count(c)>1:
            year+=1
            break
        else:
            if c==string[string.__len__()-1]:
                ans=False
print(year)
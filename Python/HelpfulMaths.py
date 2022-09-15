lst = []
lst = [item for item in input().split('+')]
lst.sort()
for item in range(0,lst.__len__()):
    if item==lst.__len__()-1:
        print(lst[item],end="")
    else:
        print(lst[item],end="+")
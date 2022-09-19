n=int(input())
A=0
D=0
s= input()
for i in s:
    if i=='A':
        A+=1
    else:
        D+=1
if A>n/2:
    print("Anton")
elif D>n/2:
    print("Danik")
else:
    print("Friendship")
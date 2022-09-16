n = int(input())
s = input()
c = 0
for ch in range(0,n-1):
    if s[ch] == s[ch+1]:
        c+=1
print(c)
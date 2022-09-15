s1 = input().lower()
s2 = input().lower()
ans = 0
for c in range(0,s1.__len__()):
    if s1[c]==s2[c]:
        continue
    elif s1[c]>s2[c]:
        ans=1
        break
    elif s1[c]<s2[c]:
        ans=-1
        break
print(ans)

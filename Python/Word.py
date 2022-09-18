s = input()
ctr = 0
for c in s:
    if c.isupper():
        ctr+=1
if ctr>(s.__len__()/2):
    print(s.upper())
else:
    print(s.lower())
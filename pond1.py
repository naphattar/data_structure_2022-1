n = int(input())
daralist = []
mv = {}
for i in range(0,n):
    l = input().split(",")
    dara = l[0]
    daralist.append(dara)
    mv[dara] = set(l[1:])
daralist.sort()
found = True
for i in range(n-1):
    for j in range(i+1,n):
        z = mv[daralist[i]].intersection(mv[daralist[j]])
        if len(z) == 0:
            print(daralist[i] +" "+daralist[j])
            found = False
if found:
    print("None")


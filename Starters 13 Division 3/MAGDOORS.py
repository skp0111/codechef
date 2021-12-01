T=int(input())
for _ in range(T):
    s=input()
    c=0
    fl=0
    for i in s:
        if i=='1' and fl==0:
            continue
        elif i=='0' and fl==0:
            c+=1
            fl=1
        elif i=='1' and fl==1:
            c+=1
            fl=0
        elif i=='0' and fl==1:
            continue
    print(c)
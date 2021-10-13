# cook your dish here
T=int(input())
for i in range(T):
    n,a,b,c=map(int,input().split())
    s=0
    if a<=b:
        s+=a
        b-=a
        a=0
    else:
        s+=b
        b=0
        a-=b
    if c<=b:
        s+=c
        b-=c
        c=0
    else:
        s+=b
        b=0
        c-=b
    if s<n:
        print("NO")
    else:
        print("YES")
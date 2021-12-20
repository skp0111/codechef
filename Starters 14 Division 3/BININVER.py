def gcd(a,b):
    while b!=0:
        a,b=b,a%b
    return a


T=int(input())
for _ in range(T):
    n=int(input())
    a=list(map(int,input().split()))
    g=gcd(a[0],a[1])
    for i in range(2,n):
        g=gcd(g,a[i])
    flag=0
    while g%2==0:
        g=g/2
        flag+=1
    print(flag)
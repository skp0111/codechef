t=int(input())
for _ in range(t):
    p,a,b,c,x,y=map(int,input().split())
    anna=b+x*a
    chak=c+y*a
    if(anna<=chak):
        q=anna
        r=chak
    else:
        r=anna
        q=chak
    ans=int(p/q)
    p=p-ans*q
    ans+=int(p/r)
    print(ans)
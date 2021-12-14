T=int(input())
for _ in range(T):
    x,y,z=map(int,input().split())
    x=x+z*2
    if x>=y:
        print("YES")
    else:
        print("NO")
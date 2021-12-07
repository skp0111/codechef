T=int(input())
for _ in range(T):
    x,y=map(int,input().split())
    
    if abs(x-y)%2==0:
        print("YES")
    else:
        print("NO")
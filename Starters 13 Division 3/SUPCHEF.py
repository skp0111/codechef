# cook your dish here
T=int(input())
for _ in range(T):
    m,n,k=map(int,input().split())
    if n*k >= m:
        print("NO")
    else:
        print("YES")
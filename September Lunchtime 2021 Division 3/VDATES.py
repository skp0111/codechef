# cook your dish here
T=int(input())
for i in range(T):
    D,L,R=map(int,input().split())
    if D<L:
        print("Too Early")
    elif D>R:
        print("Too Late")
    else:
        print("Take second dose now");
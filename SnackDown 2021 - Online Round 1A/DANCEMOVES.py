# cook your dish here
for _ in range(int(input())):
    x,y=map(int,input().split())
    if y<x:
        print(x-y)
    else:
        if (y-x)%2==0:
            print(int((y-x)/2))
        else:
            print(int((y-x+1)/2+1))
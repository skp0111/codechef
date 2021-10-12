for _ in range(int(input())):
    s=int(input())
    n=input()
    ans=0
    for i in range(len(n)):
        for j in range(i+1,i+11):
            if j<len(n):
                if j-i==abs(int(n[i])-int(n[j])):
                    ans+=1
    print(ans)
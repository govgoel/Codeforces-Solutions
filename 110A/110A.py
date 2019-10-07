n = int(input())
d = 0
c = 0
if(n//10==0):
    print("NO")
 
else:
    while(n>0):
        x = n%10
        d = d+1
        if x ==4 or x==7 :
            c = c+1
        n = n//10
 
    if (c == 7) or (c == 4):
        print("YES")
    else:
        print("NO")

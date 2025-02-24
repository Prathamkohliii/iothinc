# Enter your code here
emoji={"happy":"😊","sad":"🥲","love":"❤️","hate":"😒","funny":"😂","pizza":"🍕"}
a=input()
n=a.split(" ")
for i in range(len(n)):
    if n[i].lower() in emoji:
        n[i]=emoji[n[i].lower()]
b=''
for i in n:
    b=b+i+' '
print(b)

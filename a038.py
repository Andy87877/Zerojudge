s = input()
ans = ""
for i in range(len(s)-1,-1,-1):
    ans += s[i]
print(int(ans))
s= "abcddefg"
arr = []
for i in range(0,26):
	arr.insert(i,0)


for i in range(0,len(s)):
	x = arr[ord(s[i])-97] #get previous value
	print("x = ",x)
	x += 1 #increment it
	arr.insert(ord(s[i])-97, x) #insert new value
	print(arr[ord(s[i])-97])
	# if(arr[ord(s[i])-97] > 1):
	# 	print("character is repeated". s[i])

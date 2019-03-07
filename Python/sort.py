def minMoves(arr, n):  
	expectedItem = n 
	for i in range(n - 1, -1, -1):  
		if (arr[i] == expectedItem): 
			expectedItem -= 1
	return expectedItem 
n = 5
arr = input()
l = list(map(int,arr.split(' ')))
print(minMoves(l, n)) 
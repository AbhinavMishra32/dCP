def sort_array(source_array):
	odd_array = []
	for i in range(len(source_array)):
		if source_array[i]%2!=0:
			odd_array.append(source_array[i])
	odd_array.sort(reverse=True)

	for i in range(len(source_array)):
		if source_array[i] in odd_array:
			index = odd_array.index(source_array[i])
			source_array[i] = odd_array.pop(index)
	return source_array
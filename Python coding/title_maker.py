def title_case(title, minor_words=''):
	minor_words_list = minor_words.lower().split()
	title_words = title.lower().split()
	result = []
	for i in range(len(title_words)-1):
		if title_words[i] not in minor_words_list or i ==0:
			result.append(title_words[i].capitalize())
		else:
			result.append(title_words[i].lower())
	return ' '.join(result)
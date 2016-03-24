'''
Challenge #2: Palindrome and Reverse Lexical Sort
Ensure there is a text file with desired test cases of several 
lines of strings in the same directory as code.
In the command line from this directory, run with: python palindrome.py input.txt
'''

import fileinput

# loop through each line in file
for line in fileinput.input():

	# remove all leading and trailing characters from string
	line = line.strip()

	# remove any spaces from string
	line = line.replace(' ', '')

	# break string into a list of characters
	# sort the list in reverse order
	# join list of characters into a string and store the result
	revSort = ''.join(sorted(line, reverse=True))      

	# compare original string to reverse of original string ignoring case
	# if they are equal, then it is a plalindrome, print Yes with
	# the reverse lexical sorted string
	# else, it is not a palindrome, print No with the reverse lexical sorted string
	if str(line.lower()) == str(line.lower())[::-1]:
		print 'Yes |', revSort
	else: 
		print 'No |', revSort

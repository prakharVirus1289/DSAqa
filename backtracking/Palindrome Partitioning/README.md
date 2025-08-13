https://neetcode.io/problems/palindrome-partitioning?list=neetcode150

used an index pointer. We maintain a temp string variable to maintain the substrings. We can either add the existing substring to the res vector or keep adding the characters to the temp string variable. If we choose to add to res, we start from index+1.

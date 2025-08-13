https://neetcode.io/problems/subsets-ii?list=neetcode150

The only thing we need to understand is this line

        while (index + 1 < nums.size() && nums[index] == nums[index + 1]) {
            index++;
        }
        
This is added to ensure that duplicates do not enter the final output. We have a choice to accept the character or not accept the character. Since we are sure that having [element] as the parent of the recursion tree will produce the same child as [] will with the next element of the array as the element itself, we skip to the character that is not equal to element to prevent duplicates 

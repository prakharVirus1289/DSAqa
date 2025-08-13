https://neetcode.io/problems/search-for-word?list=neetcode150

We have to remember to erase the coordinates from the visit set when we exit the function call, so that we do not take into account another path's coordinates. This line if (index==s.length()-1 && grid[i][j]==s[index]) return true; was written to account for single-character grid. We visit each element of the grid and start the dfs from there. If consecutive elements of the grid match with words, we gradually increase the index.

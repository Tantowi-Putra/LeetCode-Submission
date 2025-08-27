Approach
=====================================
When the numbers are not sorted, it's hard to determine the minimum absolute difference.
The brute force way will cause O(N^2) Time Complexity. We can flatten the time complexity by sorting the array O(N LOG N)
After sorting, we can take 2 adjacent element as the minimum absolute differencce candidate

Clues :star:
=====================================
1. Return A list of "Pair"
2. Each Pair a < ascending
3. Therefore, the array can be sorted and we can just iterate N - 1 times, compare adjacent element,
   when the diff is equal to minimum diff, insert the pair into result arr, if new min pair is found, then reset the result arr
   and create the new list based on the new minimum absolute diff


Complexity
=====================================
Time Complexity O(N LOG N) -> Sorting 
Space Complexity O(1) -> Excluding the Result Array.
            

      
        
      

          
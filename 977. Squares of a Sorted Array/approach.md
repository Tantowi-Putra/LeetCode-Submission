Approach
=====================================

It's easy to come up with O(N LOG N) Solution by doing a single iteration over all elements, squares them up, then sort them.
The follow up questions demanded an even better approach in O(N) Time Complexity.

Clues :star:
=====================================
1. Since the original array is sorted in ascending order, it's guaranteed the largest square value is located either at the foremost or at the rearmost
   because the number is in the range of -/+.

   For Example:
   -10 2 3 4
    ^      ^
    |      |
    |      |
    L      R

Steps
=====================================
1. Initialize an Empty Array of Size N, initialize a pointer (i), pointing either at the end or the front of the array 
   (This will affect how element from the nums is inserted).
   0 0 0 0
         ^
         |
         |
         i
   
2. Initialize 2 pointers, one pointing at the first index (0) and second pointer pointing to the last index (n - 1).
   -10 2 3 4
    ^      ^
    |      |
    |      |
    L      R

3. Iteration Steps 
   1. First Iteration
      -10 2 3 4     
       ^      ^
       |      |
       |      |
       L      R

      abs(nums[L]) >= abs(nums[R]), 
         pick nums[L]
         Insert nums[L] * nums[L] to res
         L++, i--;

      Res: 
      0 0 0 100 
          ^
          |
          |
          i

   2. Second Iteration
      -10 2 3 4     
          ^   ^
          |   |
          |   |
          L   R

      abs(nums[R]) > abs(nums[L]), 
         pick nums[R]
         Insert nums[R] * nums[R]  to res
         R--, i--;

      Res:
      0 0 16 100 
        ^
        |
        |
        i

   3. Third Iteration
      -10 2 3 4     
          ^ ^
          | | 
          | | 
          L R  

      abs(nums[R]) > abs(nums[L]), 
         pick nums[R]
         Insert nums[R] * nums[R]  to res
         R--, i--;

      Res:
      0 9 16 100 
      ^
      |
      |
      i

   4. Fourth Iteration
      -10 2 3 4     
          ^ 
          |  
          |  
         L, R 

      abs(nums[L]) >= abs(nums[R]), 
         pick nums[L]
         Insert nums[L] * nums[L] to res
         L++, i--;

      Res:
      (-1) 4 9 16 100 
      ^
      |
      |
      i (Out of Bound)

   5. Fifth Iteration
      -10 2 3 4     
          ^ ^ 
          | |  
          | |
          R L

      Left Surpasses Right, Terminate

Complexity
=====================================
Time Complexity O(N)
Space Complexity O(N)
            

      
        
      

          
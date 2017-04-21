3. O(n) solution using Hashing –



    We can use map to easily solve this problem in linear time. The idea is to insert each element of the array arr[i] in a map. We also checks if difference (arr[i], sum-arr[i]) already exists in the map or not. If the difference is seen before, we print the pair and return.

Output:

    Pair found at index 0 and 2


    The time complexity of above solution is O(n) and auxiliary space used by the program is O(n).
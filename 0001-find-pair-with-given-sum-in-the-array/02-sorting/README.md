2. O(nlogn) solution using Sorting –



    The idea is to sort the given array in ascending order and maintain search space by maintaining two indexes (low and high) that initially points to two end-points of the array. Then we loop till low is less than high index and reduce search space arr[low..high] at each iteration of the loop. We compare sum of elements present at index low and high with desired sum and increment low if sum is less than the desired sum else we decrement high is sum is more than the desired sum. Finally, we return if pair found in the array.

Output:

    Pair found

    The time complexity of above solution is O(nlogn) and auxiliary space used by the program is O(1).
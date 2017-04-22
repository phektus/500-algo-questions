import java.util.HashMap;
import java.util.Map;

class FindPair
{
    // Naive method to find a pair in an array with given sum
    public static void findPair(int arr[], int sum)
    {
        // Create an emtpy Hash Map
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();

        // do for each element
        for(int i=0; i<arr.length; i++) {
            // check if pair (arr[i], sum-arr[i]) exists

            // if difference is seen before, print the pair
            if(map.containsKey(sum-arr[i])) {
                System.out.println("Pair found at index " +
                                   map.get(sum-arr[i]) +
                                   " and " +
                                   i);
            }

            // store the index of current element in the map
            map.put(arr[i], i);
        }
    }

    // main function
    public static void main(String[] args)
    {
        int arr[] = { 8, 7, 2, 5, 3, 1};
        int sum = 10;

        findPair(arr, sum);
    }
}

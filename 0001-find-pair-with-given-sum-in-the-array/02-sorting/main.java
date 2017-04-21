import java.util.Arrays;

class FindPair
{
    // Naive method to find a pair
    public static void findPair(int arr[], int sum)
    {
        // sort the array in ascending order
        Arrays.sort(arr);

        // maintain two indexes pointing to end-points of the array
        int low = 0;
        int high = arr.length - 1;

        // reduce search space arr[low..high] at each iteration of the loop

        // loop till low is less than high
        while (low < high)
            {
                // sum found
                if (arr[low] + arr[high] == sum)
                    {
                        System.out.println("Pair found");
                        return;
                    }

                // Increment low index if total is less than the desired sum
                // decrement high index if total is more than the sum
                if (arr[low] + arr[high] < sum)
                    low++;
                else
                    high--;
            }

        // No pair with given sum exists in the array
        System.out.println("Pair not found");
    }

    // main function
    public static void main (String[] args)
    {
        int arr[] = { 8, 7, 2, 5, 3, 1 };
        int sum = 10;

        findPair(arr, sum);
    }
}

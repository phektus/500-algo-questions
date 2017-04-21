class FindPair
{
    // Naive method to find a pair in an array with given sum
    public static void findPair(int arr[], int sum)
    {
        // n is the length of the array
        int n = arr.length;

        // consider each element except last element
        for (int i = 0; i < n - 1; i++)
            {
                // start from i'th element to last element
                for (int j = i + 1; j < n; j++)
                    {
                        if (arr[i] + arr[j] == sum)
                            {
                                System.out.println("Pair found at index " + i + " and " + j);
                                return;
                            }
                    }
            }

        // No pair with given sum exists in the array
        System.out.println("Pair not found");
    }

    // main function
    public static void main (String[] args)
    {
        int arr[] = { 8, 7, 2, 5, 3, 1};
        int sum = 10;

        findPair(arr, sum);
    }
}

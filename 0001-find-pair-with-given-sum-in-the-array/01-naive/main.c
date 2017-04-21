#include <stdio.h>

// Native method to find a pair in an array with given sum
void findPair(int arr[], int n, int sum)
{
  // consider each element except last element
  for (int i = 0; i < n - 1; i++)
    {
      // start from ith element until last element
      for (int j = i + 1; j < n; j++)
        {
          // if desired sum is found, print it and return
          if (arr[i] + arr[j] == sum)
            {
              printf("Pair found at index %d and %d\n", i, j);
              return;
            }
        }
    }

  // No pair given the sum exists in the array
  printf("Pair not found\n");
}

// main function
int main()
{
  int arr[] = { 8, 7, 2, 5, 3, 1};
  int sum = 10;

  int n = sizeof(arr)/sizeof(arr[0]);

  findPair(arr, n, sum);

  return 0;
}

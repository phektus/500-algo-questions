#include <bits/stdc++.h>

// Function to find a pair in an array with given sum using sorting
void findPair(int arr[], int n, int sum)
{
  // sort the array in ascending order
  std::sort(arr, arr + n);

  // maintain the two indexes pointing to end points of the array
  int low = 0;
  int high = n - 1;

  // reduce search space arr[low..high] at each iteration of the loop

  // loop till low is less than high
  while (low < high)
    {
      // sum found
      if (arr[low] + arr[high] == sum)
        {
          std::cout << "Pair found\n";
          return;
        }

      // increment low index if total is less than desired sum
      // decrement high index if total is more than the sum
      if (arr[low] + arr[high] < sum)
        {
          low++;
        }
      else
        {
          high--;
        }

    }

  // No pair with given sum exists in the array
  std::cout << "Pair not found\n";
}

// main function
int main()
{
  int arr[] = { 8, 7, 2, 5, 3, 1 };
  int sum = 10;

  int n = sizeof(arr)/sizeof(arr[0]);

  findPair(arr, n, sum);

  return 0;
}

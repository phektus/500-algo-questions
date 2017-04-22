#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// function to find a pair in an array with given sum using hashing
void findPair(int arr[], int n, int sum)
{
  // create en ampty map
  unordered_map<int, int> map;

  // do for each element
  for (int i = 0; i < n; i++)
    {
      // check if pair (arr[i], sum-arr[i]) exists

      // if difference is seen before, print the pair
      if (map.find(sum - arr[i]) != map.end())
        {
          cout << "Pair found at index "
               << map[sum - arr[i]]
               << " and "
               << i
               << "\n";
        }

      // store the index of current element in the map
      map[arr[i]] = i;
    }
}

// main function
int main()
{
  int arr[] = { 8, 7, 2, 5, 3, 1 };
  int sum = 10;

  int n = sizeof(arr) / sizeof(arr[0]);

  findPair(arr, n, sum);

  return 0;
}

#include <stdio.h>

int findMin(int arr[], int n, int startIndex, int endIndex)
{
  int min = arr[startIndex];
  for (int i = startIndex; i < endIndex; i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
    }
  }
  return min;
}

void sort(int arr[], int n, int i)
{
  // base case
  if (i == n)
    return;

  // get the min index till i
  int min = findMin(arr, n, i, n);
  // swap the min index element with ith element hence moving the smallest to the start of array
  // swap only when the index and min element are not same
  if (min != i)
  {
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }

  sort(arr, n, i + 1);
}

int main()
{
  int arr[] = {3, 5, 8, 4, 1, 9, -2};
  int n = sizeof arr / sizeof(arr[0]); // find length of array
  sort(arr, n, 0);
  

  return 0;
}
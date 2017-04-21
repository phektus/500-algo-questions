import sys

def find(needle, haystack=[]):
    arr = sorted(haystack)

    low = 0
    high = len(arr) - 1

    while low < high:
        if arr[low] + arr[high] == sum:
            print "Pair found"
            sys.exit(0)

        if (arr[low] + arr[high]) < sum:
            low += 1
        else:
            high -= 1

    print "Pair not found"


if __name__ == "__main__":
    arr = [ 8, 7, 2, 5, 3, 1 ]
    sum = 10

    find(sum, haystack=arr)

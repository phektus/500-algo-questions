import sys

def findPair(arr, k):
    cache = {}

    for i in range(0, len(arr)):
        if arr[i] in cache.keys():
            print "Pair found at index %s and %s" % (cache[arr[i]], i)
            sys.exit(0)

        cache[k-arr[i]] = i

    print "Pair not found"
    print cache.keys()


if __name__ == '__main__':
    arr = [ 8, 7, 2, 5, 3, 1 ]
    k = 10

    findPair(arr, k)

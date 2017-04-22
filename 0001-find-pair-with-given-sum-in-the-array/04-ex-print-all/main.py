import sys

def findPair(arr, k):
    cache = {}

    for i in range(0, len(arr)):
        if arr[i] in cache.keys():
            print "Found match in index %s and %s" % (cache[arr[i]], i)

        cache[k-arr[i]] = i

if __name__ == '__main__':
    arr = [ 8, 7, 2, 5, 3, 1 ]
    k = 10

    findPair(arr, k)

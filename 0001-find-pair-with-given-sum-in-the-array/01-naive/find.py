
def find(k, arr):
    for i in range(0, len(arr)-1):
        for j in range(i+1, len(arr)):
            if arr[i] + arr[j] == k:
                print "Found match: %s:%s, %s:%s" % (i, j, arr[i], arr[j])
                return

    print "Match not found in array"

if __name__ == '__main__':
    haystack = [8, 7, 2, 5, 3, 1]
    needle = 10
    print "Looking for %s in array" % needle
    find(needle, haystack)

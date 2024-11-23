def maximize_magical_median(n, k, arr):
    arr.sort()
    left = arr[n // 2]
    right = arr[-1] + k

    def can_make_median(mid):
        operations_needed = 0
        for i in range(n // 2, n):
            if arr[i] < mid:
                operations_needed += mid - arr[i]
            if operations_needed > k:
                return False
        return operations_needed <= k

    while left < right:
        mid = (left + right + 1) // 2
        if can_make_median(mid):
            left = mid
        else:
            right = mid - 1

    return left

n, k = map(int, input().split())
arr = list(map(int, input().split()))
print(maximize_magical_median(n, k, arr))

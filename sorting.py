class SortingAlgorithms:
    def __init__(self):
        pass

    def mergeTwoSorted(self, arr1, arr2, arr):

        left = 0
        right = 0
        k = 0

        while left < len(arr1) and right < len(arr2):
            if arr1[left] <= arr2[right]:
                arr[k] = arr1[left]
                left += 1
                k += 1
            else:
                arr[k] = arr2[right]
                right += 1
                k += 1

        # Add remaining elements from arr1
        while left < len(arr1):
            arr[k] = arr1[left]
            left += 1
            k += 1

        # Add remaining elements from arr2
        while right < len(arr2):
            arr[k] = arr2[right]
            right += 1
            k += 1

    def mergeSort(self, arr):
        if len(arr) <= 1:
            return

        mid = len(arr) // 2

        left = arr[:mid]
        right = arr[mid:]

        self.mergeSort(left)
        self.mergeSort(right)

        self.mergeTwoSorted(left, right, arr)


s = SortingAlgorithms()
test_cases = [[10, 3, 15, 7, 8, 23, 98, 29], [], [3], [9, 8, 7, 2], [1, 2, 3, 4, 5]]

for arr in test_cases:
    s.mergeSort(arr)
    print(arr)

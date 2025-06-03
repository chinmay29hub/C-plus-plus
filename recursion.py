def sumArray(n):

    # sum = 0

    # for i in range(n + 1):
    #     sum += i

    # return sum

    if n == 0:
        return n

    return n + sumArray(n - 1)


# print(sumArray(6))


def fib(n):

    # if n == 0 or n == 1:
    #     return n

    # a = 0
    # b = 1

    # for _ in range(2, n + 1):
    #     c = a + b
    #     a = b
    #     b = c

    # return b

    if n == 0 or n == 1:
        return n

    return fib(n - 1) + fib(n - 2)


# print(fib(4))


def factorial(n):
    # if n == 0:
    #     return 1
    # ans = 1

    # for i in range(1, n + 1):
    #     ans *= i

    # return ans

    if n == 1 or n == 0:
        return 1

    return n * factorial(n - 1)


# print(factorial(5))


def printN(n):

    # for i in range(1, n + 1):
    #     print(i, end=" ")
    if n == 0:
        return

    print(n, end=" ")
    printN(n - 1)


# printN(5)


def reverseString(s, left, right):
    # left = 0
    # right = len(s) - 1

    # while left < right:
    #     s[left], s[right] = s[right], s[left]
    #     left += 1
    #     right -= 1

    # return s

    if left >= right:
        return

    s[left], s[right] = s[right], s[left]
    reverseString(s, left + 1, right - 1)

    return s


# print(reverseString(["A", "B", "C"], 0, 2))


def isPalindrome(s, left, right):
    # left = 0
    # right = len(s) - 1

    # while left <= right:
    #     if s[left] != s[right]:
    #         return False
    #     left += 1
    #     right -= 1

    # return True

    if left >= right:
        return True

    if s[left] != s[right]:
        return False

    return isPalindrome(s, left + 1, right - 1)


# print(isPalindrome("madamm", 0, 5))


def countNumbers(n):

    # if n == 0:
    #     return 1

    # count = 0

    # while n > 0:
    #     n //= 10
    #     count += 1

    # return count
    if n // 10 == 0:
        return 1

    n = n // 10

    return 1 + countNumbers(n)


# print(countNumbers(343222))


def sumDigits(n):
    # sum = 0

    # while n > 0:
    #     last = n % 10
    #     n = n // 10
    #     sum += last

    if n // 10 == 0:
        return 1

    # n = n // 10

    return n % 10 + sumDigits(n // 10)


# print(sumDigits(123))


import time


def calc(func):
    def wrapper():
        t1 = time.time()
        func()
        t2 = time.time()

        print(f"Time taken {t2 - t1}")
    return wrapper

@calc
def sum():
    i = 0
    while i < 100000000:
        i += 1
    return i

sum()

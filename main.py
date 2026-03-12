def myfunc(x, y):
    z = 2 * x - y
    return z


def myfunc_2(a):
    for i in range(5):
        myfunc(a[i], a[i + 1])


def myfunc_3(a):
    for i in range(5):
        myfunc(a[i], a[i + 1])


def main():
    a = [1, 2, 3, 4, 5]
    for _ in range(100):
        myfunc_2(a)
    for _ in range(300):
        myfunc_3(a)


if __name__ == '__main__':
    main()

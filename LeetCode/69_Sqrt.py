def mySqrt(x):
    if x <= 1:
        return x
    r = x
    while r > x / r:
        r = (r + x / r) // 2
    return int(r)


if __name__ == '__main__':
    print(mySqrt(24))

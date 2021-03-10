def checkValidString(s):
    kuo = xing = 0
    for i in s:
        if i == '(':
            kuo += 1
        elif i == '*':
            xing += 1
        else:
            if kuo != 0:
                kuo -= 1
            elif xing != 0:
                xing -= 1
            else:
                return False
    print(kuo)
    print(xing)


if __name__ == '__main__':
    s = '(((((***()(()))'
    checkValidString(s)

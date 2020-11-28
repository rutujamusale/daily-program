def is_leap(year):
    leap = False

    if year % 400 == 0:
        return True
    elif year % 100 == 0:
        return False
    elif year % 4 == 0:
        return True
    else:
        return False
    return leap

year = int(input())
print(is_leap(year))

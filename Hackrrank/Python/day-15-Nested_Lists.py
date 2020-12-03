def GetName(pair):
    return pair[0]

def GetGrade(pair):
    return pair[1]


if __name__ == '__main__':
    lowest=[]
    secondLowest = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        pair = [name, score]

        if not lowest:
            lowest.append(pair)
        elif lowest[0][1] == score:
            lowest.append(pair)
        elif lowest[0][1] > score:
            secondLowest = list(lowest)
            lowest.clear()
            lowest.append(pair)
        elif not secondLowest:
            secondLowest.append(pair)
        elif secondLowest[0][1] == score:
            secondLowest.append(pair)
        elif secondLowest[0][1] > score:
            secondLowest.clear()
            secondLowest.append(pair)

    secondLowest = sorted(secondLowest, key=GetName)

    for pair in secondLowest:
        print(pair[0])

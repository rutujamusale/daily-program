def average(array):
    # your code goes here

    set1=set(arr)
    sum1=sum(set1)
    return sum1/len(set1)

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(re

if __name__ == '__ma__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    cuboid= [[i, j, k]for i in range(0, x+1) for j in range(0, y+1) for k in range(0, z+1) if i+j+k!=n]
    print(cuboid)

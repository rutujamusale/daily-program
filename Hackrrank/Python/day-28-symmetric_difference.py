# Enter your code here. Read input from STDIN. Print output to STDOUT
M = int(input())
m_set = set(map(int, input().split()))
N = int(input())
n_set = set(map(int, input().split()))

m_def = m_set.difference(n_set)
n_def = n_set.difference(m_set)

output = m_def.union(n_def)

for i in sorted(list(output)):
    print(i)

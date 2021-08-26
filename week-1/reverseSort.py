def reversSort(a):
    cost = 0
    for i in range(len(a)-1):
        # find the min element
        m = min(a[i:])
        # find the index of the min element
        m_index = a[i:].index(m)
        # reverse from i to m_index
        a[i:m_index + i + 1] = a[i : m_index + i + 1][::-1]
        # keep track of cost
        cost += len(a[i:m_index+ i + 1])
    return cost



for t in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    print('Case #',t+1,':',reversSort(a),sep='')
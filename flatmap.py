def flat(data):
    # res = []

    # for i in data:
    #     for j in i:
    #         res.append(j)

    # return res

    return [j for i in data for j in i]

data = [[1, 2], [3, 4], [5]]
print(flat(data))

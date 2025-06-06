def getMaxRequests(endpointCapacity, incomingTraffic, k):
    n = len(endpointCapacity)
    base_total = 0
    extra_gains = []

    for i in range(n):
        cap = endpointCapacity[i]
        traffic = incomingTraffic[i]

        handled_normally = min(cap, traffic)
        handled_doubled = min(2 * cap, traffic)

        base_total += handled_normally
        extra_gains.append(handled_doubled - handled_normally)

    # Sort extra gains descending and pick top k
    extra_gains.sort(reverse=True)
    base_total += sum(extra_gains[:k])

    return base_total

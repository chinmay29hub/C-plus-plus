def build_char_mapping():
    groups = [
        "ab",  # 1
        "cde",  # 2
        "fgh",  # 3
        "ijk",  # 4
        "lmn",  # 5
        "opq",  # 6
        "rst",  # 7
        "uvw",  # 8
        "xyz",  # 9
    ]
    return {ch: i + 1 for i, group in enumerate(groups) for ch in group}


def integrityScore(dataPacket):
    char_to_value = build_char_mapping()
    n = len(dataPacket)
    prefix_sum = [0] * (n + 1)

    # Compute prefix sum
    for i in range(n):
        prefix_sum[i + 1] = prefix_sum[i] + char_to_value[dataPacket[i]]

    count = 0
    # Check all substrings
    for i in range(n):
        for j in range(i + 1, n + 1):
            total = prefix_sum[j] - prefix_sum[i]
            length = j - i
            if total % length == 0:
                count += 1

    return count

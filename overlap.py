def check_and_print_overlaps(conditions):
    # conditions: list of [start_day, end_day]
    if not conditions:
        return False

    # Step 1: Collect all unique days (start and end+1)
    days = []
    for start, end in conditions:
        days.append(start)
        days.append(end + 1)  # Next day after end (inclusive)
    days = sorted(set(days))  # Sort and remove duplicates

    print("Days :", days)

    # Step 2: Process each period and check overlaps
    periods = []
    has_overlap = False
    for i in range(len(days) - 1):
        start = days[i]
        end = days[i + 1] - 1  # End of current period
        if end < start:
            continue  # Skip empty periods

        # Count conditions active in this period
        active_conditions = 0
        for cond_start, cond_end in conditions:
            if start >= cond_start and end <= cond_end:
                active_conditions += 1

        # If multiple conditions active, it’s an overlap
        if active_conditions > 1:
            has_overlap = True

        # Store period (only if it has at least one condition)
        if active_conditions > 0:
            periods.append(f"{start}-{end}")

    print("Periods: ", periods)

    # Step 3: Print all periods
    print(", ".join(periods) if periods else "No periods")

    return has_overlap


# Test cases
print("Test 1:")
conditions1 = [[10, 20], [15, 25]]
print(check_and_print_overlaps(conditions1))  # Output: 10-14, 15-20, 21-25 \n True

print("\nTest 2:")
conditions2 = [[10, 15], [16, 20]]
print(check_and_print_overlaps(conditions2))  # Output: 10-15, 16-20 \n False

print("\nTest 3:")
conditions3 = [[10, 20], [15, 25], [12, 18]]
print(
    check_and_print_overlaps(conditions3)
)  # Output: 10-11, 12-14, 15-18, 19-20, 21-25 \n True

print("\nTest 4:")
conditions2 = [[10, 15], [17, 21]]
print(check_and_print_overlaps(conditions2))

n = int(input())
for i in range(1, n + 1):
    number_of_section = i ** 2
    total_positions = number_of_section * (number_of_section - 1) // 2
    attacking_positions = (i - 2) * (i - 1) * 2 * 2
    print(total_positions - attacking_positions)
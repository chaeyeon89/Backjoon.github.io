import collections

numbers = [int(input()) for _ in range(10)]
average = sum(numbers) // 10

count_numbers = collections.Counter(numbers)
modes = count_numbers.most_common()
max_count = modes[0][1]
mode_values = [num for num, cnt in modes if cnt == max_count]

print(average)
print(mode_values[0])

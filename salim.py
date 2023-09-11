def calculate_average(numbers):
    total = 0
    count = 0

    for num in numbers:
        total += num
        count += 1

    average = total / count
    return average

numbers = [5, 10, 15, 20, 25]
result = calculate_average(numbers)
print("The average is: " + result)

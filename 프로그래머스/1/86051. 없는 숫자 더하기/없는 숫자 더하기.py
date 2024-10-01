def solution(numbers):
    answer = 0
    for i in range(0, 10):
        answer += i

    for j in range(len(numbers)):
        answer -= numbers[j]

    return answer
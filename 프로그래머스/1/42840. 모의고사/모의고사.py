def solution(answers):
    first = [1, 2, 3, 4, 5]
    second = [2, 1, 2, 3, 2, 4, 2, 5]
    third = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]

    first_correct = second_correct = third_correct = 0

    for i in range(len(answers)):
        if answers[i] == first[i % len(first)]:  
            first_correct += 1
        if answers[i] == second[i % len(second)]:  
            second_correct += 1
        if answers[i] == third[i % len(third)]:  
            third_correct += 1

    # 최댓값 찾기
    max_correct = max(first_correct, second_correct, third_correct)

    # 최댓값을 가진 사람 찾기
    result = []
    if first_correct == max_correct:
        result.append(1)
    if second_correct == max_correct:
        result.append(2)
    if third_correct == max_correct:
        result.append(3)

    return result
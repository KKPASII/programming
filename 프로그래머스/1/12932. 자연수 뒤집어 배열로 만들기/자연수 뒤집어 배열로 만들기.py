def solution(n):
    n = str(n)[::-1]
    answer = [int(n[i]) for i in range(len(n))]
    return answer
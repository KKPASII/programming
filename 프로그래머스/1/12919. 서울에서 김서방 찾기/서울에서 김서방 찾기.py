def solution(seoul):
    answer = ''
    for who in range(len(seoul)):
        if (seoul[who] == 'Kim'):
            answer = str(who)
    return '김서방은 ' + answer + '에 있다'
from itertools import permutations
def solution(k, dungeons):
    answer = -1
    seq_list = list(permutations(dungeons, len(dungeons)))
    for lst in seq_list:
        my_count = 0
        my_enrgy = k
        for l in lst:
            if my_enrgy>=l[0]:
                my_enrgy-=l[1]
                my_count+=1
            else:
                break
        answer = max(answer, my_count)
    return answer
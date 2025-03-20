def solution(skill, skill_trees):
    answer = 0
    for tree in skill_trees:
        skill_seq = [ch for ch in tree if ch in skill]
        print(skill_seq)
        skl = "".join(skill_seq)[:min(3, len(skill_seq))]
        print(skl)
        if skill.startswith(skl):
            answer+=1
    return answer
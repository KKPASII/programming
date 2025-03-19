from collections import deque
def solution(begin, target, words):
    if target not in words:
        return 0
    
    q = deque([(begin, 0)])
    
    while q:
        word, steps = q.popleft()
        
        if word == target:
            return steps
        
        for next_word in words:
            if sum([word[i] != next_word[i] for i in range(len(word))]) == 1:
                q.append((next_word, steps+1))
                words.remove(next_word)
            
    return 0
def solution(s, n):
    answer = ''
    for ch in s:
        if 'a' <= ch and ch <= 'z':
            answer += chr(ord('a') + (ord(ch) - ord('a') + n)%26)
        elif 'A' <= ch and ch <= 'Z':
            answer += chr(ord('A') + (ord(ch) - ord('A') + n)%26)
        else:
            answer += ch
    return answer
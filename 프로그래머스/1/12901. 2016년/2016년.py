def solution(a, b):
    day = {0:'FRI', 1:'SAT', 2:'SUN', 3:'MON', 4:'TUE', 5:'WED', 6:'THU'}
    day_count = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    days = sum(day_count[:a-1]) # if a > 0 # else 0
    days += b
    return day[(days-1)%7]
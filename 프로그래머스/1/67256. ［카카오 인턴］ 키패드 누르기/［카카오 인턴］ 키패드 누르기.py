def solution(numbers, hand):
    answer = ''
    pos = {
        1:[0,0],2:[0,1],3:[0,2],
        4:[1,0],5:[1,1],6:[1,2],
        7:[2,0],8:[2,1],9:[2,2],
        '*':[3,0],0:[3,1],'#':[3,2]
    }

    left_num = [1, 4, 7]
    middle_num = [2, 5, 8, 0]
    right_num = [3, 6, 9]
    
    my_left = '*'
    my_right = '#'
    for key in numbers:
        if key in left_num:
            my_left = key
            answer+='L'
        elif key in right_num:
            my_right = key
            answer+='R'
        else:
            next_key = pos[key]
            left = pos[my_left]
            right = pos[my_right]
            
            l_distance = abs(next_key[0] - left[0]) + abs(next_key[1] - left[1])
            r_distance = abs(next_key[0] - right[0]) + abs(next_key[1] - right[1])
            
            if l_distance < r_distance:
                answer+='L'
                my_left = key
            elif l_distance > r_distance:
                answer+='R'
                my_right=key
            else:
                if hand == "left":
                    answer+='L'
                    my_left=key
                else:
                    answer+='R'
                    my_right=key
    return answer
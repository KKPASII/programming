def solution(number, limit, power):
    def divisor_count(num):
        count = 0
        for k in range(1, int(num ** 0.5) + 1):
            if num % k == 0:
                count += 1
                if k != num // k:
                    count += 1
        return count
    
    attack_list = [divisor_count(num) if divisor_count(num) <= limit else power
                  for num in range(1, number+1)]
    answer = sum(attack_list)
    return answer
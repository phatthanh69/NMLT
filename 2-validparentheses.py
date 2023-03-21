from operator import truediv


class Solution:
    def isValid(self, s: str) -> bool:
        stack = deque()
        for i in s:
            if i in "([{":
                stack.append(i)
            elif i in ")]}":
                if not stack:
                    return False
                start = stack.pop()
                if start == '(' and i == ')':
                    continue
                if start == '{' and i == '}':
                    continue
                if start == '[' and i == ']':
                    continue
                else:
                    return False
        return len(stack) == 0 and True or False
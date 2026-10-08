class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        mapping = {"}":"{", ")":"(", "]":"["}

        for c in s:
            if c in mapping:
                if stack and stack[-1] == mapping[c]:
                    stack.pop()
                    continue
                else:
                    return False
            stack.append(c)
        return True if not stack else False
        
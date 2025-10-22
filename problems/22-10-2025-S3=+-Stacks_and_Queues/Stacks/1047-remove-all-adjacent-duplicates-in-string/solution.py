# Time and Space Complexity are O(n)


class Solution:
    def removeDuplicates(self, s: str) -> str:
        """
        Idea is to recognize the LIFO pattern in the deletion order
        From there we know a stack is very useful here and we can simply iterate over and
        add elements into the stack and check if the top is the same as the current character
        """
        
        stack = []
        for c in s:
            if stack and stack[-1] == c:
                stack.pop()
            else:
                stack.append(c)
        
        return "".join(stack)
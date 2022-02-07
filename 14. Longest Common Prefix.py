class Solution(object):
    def longestCommonPrefix(self, strs):
        li = []
        if not strs:
            return ""

        for i in range(len(strs[0])):
            for string in strs[1:]:
                if i >= len(string) or string[i] != strs[0][i]:
                    li.append(strs[0][:i])
        return li


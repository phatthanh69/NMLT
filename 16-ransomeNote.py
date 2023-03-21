import re


class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        if len(ransomNote) > len(magazine):
            return False
        counter1 = {}
        for i in (ransomNote):
            if i not in counter1:
                counter1[i] = 0
            counter1[i] += 1
        counter2 = {}
        for i in (magazine):
            if i not in counter2:
                counter2[i] = 0
            counter2[i] += 1
        if counter1 & counter2 == counter1:
            return True
        return False       
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        sl = {}
        for el in arr:
            if el not in sl.keys():
                sl[el] = 0
            else:
                sl[el] += 1
        occ = []
        for el in sl.keys():
            if sl[el] in occ:
                return False
            occ.append(sl[el])
        return True

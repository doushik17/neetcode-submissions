class Solution:

        def encode(self, strs: List[str]) -> str:
            if(strs==[]):
                return ""
            if(strs==[""]):
                return "12"
            s="17#".join(strs)
            return s
        def decode(self, s: str) -> List[str]:
            if(s==""):
                return []
            if(s=="12"):
                return [""]
            return s.split("17#") 
class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        rows=["qwertyuiop","asdfghjkl","zxcvbnm"]
        k=-1
        result=[]
        if "d" not in rows[2]:
            print("Hi\n")
        for i in range(0,len(words)):
            if words[i][0].lower() in rows[0]:
                k=0
            elif words[i][0].lower() in rows[1]:
                k=1
            elif words[i][0].lower() in rows[2]:
                k=2
            valid_word=True
            # words[i].lower()
            for j in words[i].lower():
                # print(j, valid)
                if k==0 and (j not in rows[0]):
                    valid_word=False
                    break
                if k==1 and (j not in rows[1]):
                    valid_word=False
                    break
                if k==2 and (j not in rows[2]):
                    valid_word=False
                    break
                print(k, j, valid_word)
            if valid_word==True:
                result.append(words[i])
        return result

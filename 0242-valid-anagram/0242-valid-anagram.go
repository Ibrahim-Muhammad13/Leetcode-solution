
func isAnagram(s string, t string) bool {

    if len(s)!=len(t){
        return false
    }
    m:= make(map[byte]int)
    x:= make(map[byte]int)
    
    for i:=0;i<len(s);i++{
        m[s[i]]++
    }
    for i:=0;i<len(t);i++{
        x[t[i]]++
    }
    for i:=0;i<len(s);i++{
        if m[s[i]]!=x[s[i]] {
            return false
        }
    }
    return true
}
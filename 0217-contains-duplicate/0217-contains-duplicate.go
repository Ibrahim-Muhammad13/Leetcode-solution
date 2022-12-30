func containsDuplicate(nums []int) bool {
    m:= make(map[int]int)
    
    for i:=0; i<len(nums);i++{
        if(m[nums[i]]>0){
            return true
        }
        m[nums[i]]++
    }
    return false
}
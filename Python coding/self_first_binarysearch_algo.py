import math

nums = sorted(set([35,23,6,7,45,73,8,458,45,36,7]))
inxt = math.floor(nums.index(nums[-1])/2)
findnum = 7
if nums[inxt] != findnum:
    if nums[inxt] > findnum:
        nums2 = nums[0:nums.index(inxt)/2]
        i2nxt = math.floor(nums2.index(inxt)/2)
        if nums2[i2nxt] > findnum:
            print("number was not found in 2 steps")
    elif nums[inxt] < findnum:
        nums2lg = nums[nums.index(inxt):-1]
        i2nxtlg = math.floor(nums2lg.index(nums2lg[-1]/2))
        if nums2lg[i2nxtlg] < findnum:
            print("number wasnt found in 2 steps in the right side too")



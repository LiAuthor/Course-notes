def digui(nums):
    L = len(nums)
    for i in range(L-3):
        if nums[i] < nums[i+1] and nums[i+1] < nums[i+2]:
            return True

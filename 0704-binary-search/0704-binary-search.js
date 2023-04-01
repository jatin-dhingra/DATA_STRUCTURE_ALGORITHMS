/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) 
{
    let s=0;
    let e=nums.length-1;
    while(s<=e){
        let mid=Math.floor(s+(e-s)/2);
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
    
};
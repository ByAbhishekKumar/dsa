public class Solution {
    public void Rotate(int[] nums, int k) {
        if (nums.size() <= 1 || k == 0 || nums.size() == k) {
            return;
        }
        
        int *copy = new int[nums.Length];
        // index of the element that will be first in the rotated array
        int offset = nums.size() - (k % nums.size());
        
		// loop through the new array and copy elements in the correct order
        for (int i = 0; i < nums.size(); i++) {
            copy[i] = nums[offset];
            if (offset == nums.size() - 1) {
                offset = 0;
            } else {
                offset++;
            }
        }
        
		// copy back to original array
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = copy[i];
        }
    }
}
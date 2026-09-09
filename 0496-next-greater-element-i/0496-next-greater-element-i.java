class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
  int n = nums1.length;
        int m = nums2.length;

        int[] ans = new int[n];
        Arrays.fill(ans, -1);

        for (int i = 0; i < n; i++) {

            int a = nums1[i];

            for (int j = 0; j < m; j++) {

                if (nums2[j] == a) {

                    for (int p = j + 1; p < m; p++) {

                        if (nums2[p] > nums2[j]) {
                            ans[i] = nums2[p];
                            break;
                        }
                    }

                    break;
                }
            }
        }

        return ans;
    }
}
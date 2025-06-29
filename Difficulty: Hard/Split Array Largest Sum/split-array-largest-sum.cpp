class Solution {
  public:
    bool isPossible(vector<int>& arr, int N, int K, int mid) {
        int count = 1;
        int sumsubarray = 0;

        for (int i = 0; i < N; ++i) {
            sumsubarray += arr[i];

            if (sumsubarray > mid) {
                count++;
                sumsubarray = arr[i];
            }
        }

        return count <= K;
    }
    
    int splitArray(vector<int>& arr, int K) {
        // code here
        int N = arr.size();
        int low = *max_element(arr.begin(), arr.end());
        int high = 0;
        for (int i = 0; i < N; ++i) {
            high += arr[i];
        }
        int result = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isPossible(arr, N, K, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return result;
    }
};
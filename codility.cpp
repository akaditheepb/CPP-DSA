#include <vector>
#include <cstdlib>
int solution(std::vector<int> &A) {
    int left = 0;
    int right = A.size() - 1;
    int count = 0;

    while (left <= right) {
        long long leftAbs = llabs((long long)A[left]);
        long long rightAbs = llabs((long long)A[right]);

        count++;

        if (leftAbs > rightAbs) {
            while (left <= right && llabs((long long)A[left]) == leftAbs) {
                left++;
            }
        } else if (leftAbs < rightAbs) {
            while (left <= right && llabs((long long)A[right]) == rightAbs) {
                right--;
            }
        } else {
            while (left <= right && llabs((long long)A[left]) == leftAbs) {
                left++;
            }
            while (left <= right && llabs((long long)A[right]) == rightAbs) {
                right--;
            }
        }
    }

    return count;
}

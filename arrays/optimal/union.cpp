#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> unionArr;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0, j = 0;

        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                if (unionArr.size() == 0 || unionArr.back() != nums1[i]) {
                    unionArr.push_back(nums1[i]);
                }
                i++;
            }
            else {
                if (unionArr.size() == 0 || unionArr.back() != nums2[j]) {
                    unionArr.push_back(nums2[j]);
                }
                j++;
            }
        }

        while (i < n1) {
            if (unionArr.size() == 0 || unionArr.back() != nums1[i]) {
                unionArr.push_back(nums1[i]);
            }
            i++;
        }

        while (j < n2) {
            if (unionArr.size() == 0 || unionArr.back() != nums2[j]) {
                unionArr.push_back(nums2[j]);
            }
            j++;
        }

        return unionArr;
    }
};

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> nums1(n1);
    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> nums2(n2);
    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    Solution obj;
    vector<int> ans = obj.unionArray(nums1, nums2);

    cout << "Union of the arrays is: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
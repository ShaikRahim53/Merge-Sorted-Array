#include <vector> // Include vector
#include <iostream> // Include for main function output
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int temp=m;
        //cout << m <<" " << temp;
        for(int i=0;i<n;i++)
        {
            //cout << nums1[i];
            nums1.at(temp) = nums2.at(i);
            temp++;
        }
        for(int i=0;i<m+n;i++)
        {
             //cout << nums1[i] << " ";
             for(int j=0;j<m+n-i-1;j++)
             {
                 if ( nums1[j+1] < nums1[j] )
                 {
                     temp = nums1[j];
                     nums1[j] = nums1[j+1];
                     nums1[j+1] = temp;
                 }
             }

        }
        for(int i=0;i<m+n;i++)
           cout << nums1[i] << " ";
           
    }
};
int main() {
    Solution s;
    vector<int> nums1;
    vector<int> nums2;
    int m,n,ele;
    cin >> m;
    cin >> n;
    for(int i=0;i<m+n;i++)
    {
        cin >> ele;
        nums1.push_back(ele);
    }
    //cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> ele;
        nums2.push_back(ele);
    }
    //cout << n;
    s.merge(nums1, m, nums2, n);
}

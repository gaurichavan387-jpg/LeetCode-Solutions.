class Solution {
public:
 void mergesort(vector<int> & nums, int low, int mid, int high) {
    vector<int>temp ;
    int i= low ;
    int j = mid+1;
    while(i<=mid && j<=high){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }else {
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i<=mid){
      temp.push_back(nums[i]);
            i++;  
    }
    while(j<=high){
       temp.push_back(nums[j]);
            j++;  
    }
     for(int k=0;k<temp.size();k++){
        nums[low+k] = temp[k];
     }

        }



void merge(vector<int> &nums ,int low , int high){
            if(low<high){
                int mid = low+(high-low)/2;
                
                merge(nums , low, mid);
                merge(nums , mid+1 , high);
                mergesort(nums, low , mid , high);
            }
        }
    vector<int> sortArray(vector<int>& nums) {
       merge(nums ,0 ,nums.size()-1);
       return nums;
        
    }
};
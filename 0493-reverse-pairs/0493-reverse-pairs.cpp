class Solution {
public:
    
    int mergeArr(vector<int> &nums,int low,int mid,int high){
        int left=low;
        int right=mid+1;
        int count=0;
        int j = mid + 1;
        for(int i = low; i<=mid ; i++)
        {
            while(j<=high && nums[i] > 2*(long long)nums[j])
            {
                j++;
            }
            count += j - (mid+1);
        }
        vector<int> newArr; 
        int cnt=0;
        while(left<=mid&&right<=high){
            if(nums[left]<=nums[right]){
                newArr.push_back(nums[left]);
                left++;
            }
            else{
                // if(nums[left]>(long)2*nums[right]) cnt+=(mid-left+1);
                newArr.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            newArr.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            newArr.push_back(nums[right]);
            right++;
        }
        // cout<<newArr[0]<<endl;
        for(int i=low;i<=high;i++){
            nums[i]=newArr[i-low];
        }
        return count;
        
    }
    
    
    int mergeSort(vector<int> &nums,int low,int high){
        if(low>=high) return 0;
        int mid=(high+low)/2;
        int ans=0;
        int count=0;
        count+=mergeSort(nums,low,mid);
        count+=mergeSort(nums,mid+1,high);
        count+=mergeArr(nums,low,mid,high);
        return count;
        
    }
    
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};
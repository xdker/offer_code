//从左下角或右上角开始搜索
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size()==0)
            return false;
        int m=matrix.size();
        int n=matrix[0].size();
        int m1=m-1;
        int n1=0;
        while(m1>=0&&n1<n){
            if(matrix[m1][n1]<target)
                n1++;
            else if (matrix[m1][n1]>target)
                m1--;
            else
                return true;
        }
        return false;
        
    }
};

//二分法查找
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size()==0)
            return false;
            for(int i=0;i<min(matrix[0].size(),matrix.size());i++){
                if (binary_search(matrix, target, i, false) || binary_search(matrix, target, i, true))
                    return true;
            }
        return false;
    }
    bool binary_search(vector<vector<int>>& matrix,int target,int start,int mode){
        //mode=1 纵向搜索
        int min=start;
        int max,mid;
        if (mode)
            max=matrix.size()-1;
        else
            max=matrix[0].size()-1;
        while (min<=max)
        {
            mid=(min+max)/2;
            if (mode){
                if (matrix[mid][start]<target)
                    min=mid+1;
                else if (matrix[mid][start]>target)
                    max=mid-1;
                else
                    return true;
            }
            else
            {
                if (matrix[start][mid]<target)
                    min=mid+1;
                else if (matrix[start][mid]>target)
                    max=mid-1;
                else
                    return true;  
            }
        }
        return false;
        
        
    }
};
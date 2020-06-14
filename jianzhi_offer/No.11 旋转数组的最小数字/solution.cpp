
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int min=0;
        int max=numbers.size()-1;
        int mid;
        while(min<max){
            mid=(max+min)/2;
            if (numbers[mid]>numbers[max]){
                min=mid+1;
            }
            else if(numbers[mid]==numbers[max]){
                if (numbers[max-1]==numbers[max])
                    max=max-1;
                else
                    min=mid+1;
            }
            else{
                max=mid;
            }
        }
        return numbers[min];
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        int arr[100];
        int count=0;
        int t=0;
        int n=x;
        if(x<0){
            return false;
        }
        while(n>0){
            n=n/10;
            count++;
        }
        for(int i=0; i<count; i++){
            arr[i]=x%10;
            x=x/10;
        }
        for(int j=0; j<count; j++){
            if(arr[j]!=arr[count-j-1])
                t++;         
        }
        if(t==0){
            return true;
        } else {
            return false;
        }
    }
};

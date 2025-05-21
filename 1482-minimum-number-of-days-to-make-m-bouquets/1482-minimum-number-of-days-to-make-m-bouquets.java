class Solution {
    public int minDays(int[] bloomDay, int m, int k) {
        if((long)m*k>bloomDay.length){
            return -1;
        }
        int minDay=Arrays.stream(bloomDay).min().getAsInt();
        int maxDay=Arrays.stream(bloomDay).max().getAsInt();
        // int res=-1;
        while(minDay<maxDay){
            int day=minDay+(maxDay-minDay)/2;
            if(possible(bloomDay,m,k,day)){
                // res=day;
                maxDay=day;
            }
            else{
                minDay=day+1;
            }
        }
        return minDay;
    }
    public boolean possible(int[] bloomDay,int m,int k,int day){
        int total=0;
        for(int i=0;i<bloomDay.length;i++){
            int count=0;
            while(i<bloomDay.length && count<k && bloomDay[i]<=day){
                count++;
                i++;
            }
            if(count==k){
                total++;
                i--;
            }
            if(total>=m){
                return true;
            }
        }
        return false;
    }
}
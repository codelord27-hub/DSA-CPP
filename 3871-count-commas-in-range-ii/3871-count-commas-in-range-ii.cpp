#include<algorithm>
class Solution {
public:
    long long countCommas(long long n) {
       long long comma = 1;
       long long end;
        long long ans = 0;

       if (n <= 999){
        return 0;
       }
       for (long long i = 1000; i<=n; i*= 1000){
        long long count = 0;
        end = min(n, i*1000-1);
        count = end - i + 1;
        ans += count * comma;
        comma++;
       }
       return ans;
    }
};
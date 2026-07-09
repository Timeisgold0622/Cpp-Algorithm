#include <iostream>
#include <vector>

int main(){
    int N, M;
    long long total = 0;
    std::cin >> N >> M;
    std::vector<long long> a = std::vector<long long>(N+1,0);
    std::vector<long long> r = std::vector<long long>(M+1,0);

    for (int i = 1; i <= N; ++i){
        std::cin >> a[i];
        a[i] = a[i-1] + a[i];
        int remainder = a[i] % M;
        r[remainder]++;
        if (remainder == 0){
            total ++;
        }
    }
    for (int i = 0; i < M; ++i){
        if (r[i] > 1){
            total += (r[i])*(r[i]-1) / 2;
        }
    }
    
}
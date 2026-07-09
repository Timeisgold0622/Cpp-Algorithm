#include <iostream>
#include <vector>

int main(){
    int N,M;
    int sum;
    int o = 0,t = M -1,count = 0;
    std::vector<int> a(N,0);
    std::cin >> N;
    std::cin >> M;
    for (int i = 0; i < N ; ++i){
        std::cin >> a[i];
    }
    for (int i = 0; i < N-1; ++i){
        for (int j = i+1; j < N; ++j){
            if (a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    while (o < t){
        sum = a[o] + a[t];
        if (sum > M){
            t--;
        }else if(sum < M){
            o++;
        }else{
            count++;
            t--;
            o++;
        }
    }
    std::cout << count << "\n";

}
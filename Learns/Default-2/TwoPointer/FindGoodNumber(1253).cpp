#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N, K = 0;
    int sum = 0,count = 0;
    std::cin >> N;
    std::vector<int> A(N,0);

    int f = 0,s = N-1;

    for (int i = 0; i < N; ++i){
        std::cin >> A[i];
    }

    std::sort(A.begin(), A.end());

    while (K < N){

        if (f >= s){
            K++;
            f = 0;
            s = N-1;
            continue;
        }
        if (f == K){
            f++;
            continue;
        }
        if (s == K){
            s--;
            continue;
        }

        sum = A[f] + A[s];

        
        if (sum > A[K]){
            s--;
        }else if (sum < A[K]){
            f++;
        }else{
            count++;
            K++;
            f = 0;
            s = N-1;

        }
    }
}
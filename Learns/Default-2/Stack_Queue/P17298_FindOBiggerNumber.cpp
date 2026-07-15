#include <iostream>
#include <vector>
#include <stack>

int main(){
    int N;
    std::cin >> N;
    std::vector<int> A (N,0);
    std::vector<int> ans (N,0);
    
    for (int i = 0; i < N; ++i){
        std::cin >> A[i];
    }

    std::stack<int> NumStack;
    NumStack.push(0);

    for (int i = 1; i < N; ++i){
        while (!NumStack.empty() && A[NumStack.top()] < A[i]){
            ans[NumStack.top()] = A[i];
            NumStack.pop();
        }
        NumStack.push(i);
    }
    while (!NumStack.empty()){
        ans[NumStack.top()] = -1;
        NumStack.pop();
    }
    for (int i = 0; i < N; ++i){
        std::cout << ans[i] << " ";
    }

}
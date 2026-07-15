// 1874번

#include <iostream>
#include <vector>
#include <stack>

int main(){
    int N;
    std::cin >> N;
    std::vector<int> A(N,0);
    std::vector<char> resultV;
    
    for (int i = 0; i < N; ++i){
        std::cin >> A[i];
    }

    std::stack<int> MStack;
    int num = 1;
    bool result = true;

    for (int i = 0; i < A.size(); ++i){
        int n = A[i];

        if (n >= num){
            while (n >= num){
                MStack.push(num++);
                resultV.push_back('+');
            }
            MStack.pop();
            resultV.push_back('-');
        }else{
            int stackPointer = MStack.top();
            MStack.pop();

            if (stackPointer > n){
                std::cout << "NO";
                result = false;
                break;
            }else{
                resultV.push_back('-');
            }
        }
    }
    if (result){
        for (int i = 0; i < resultV.size(); ++i){
            std::cout << resultV[i] << '\n';
        }
    }

}
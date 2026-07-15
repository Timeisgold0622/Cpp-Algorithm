#include <iostream>
#include <queue>

struct compare {
    bool operator()(int o1, int o2){
        int first_abs = abs(o1);
        int second_abs = abs(o2);
        if (first_abs == second_abs){
            return o1 > o2;
        }else{
            return first_abs > second_abs;
        }
    }
};

int main(){
    // 우선순위 큐 선언 방식 : <자료형, 구현체, 비교 함수 명>
    std::priority_queue<int,std::vector<int>,compare> _queue;

    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i){
        int request;
        std::cin >> request;

        if (request == 0){
            if (_queue.empty()){
                std::cout << "0\n";
            }
            else{
                std::cout << _queue.top() << "\n";
                _queue.pop();
            }
        }else{
            _queue.push(request);
        }
    }
}
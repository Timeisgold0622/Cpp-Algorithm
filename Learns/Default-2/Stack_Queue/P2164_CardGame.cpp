#include <iostream>
#include <queue>

int main(){
    std::queue<int> _queue;
    int N;
    std::cin >> N;
    
    for (int i = 1; i <= N; ++i){
        _queue.push(i);
    }
    while (_queue.size() > 1){
        _queue.pop();
        _queue.push(_queue.front());
        _queue.pop();
    }
    std::cout << _queue.front();
}
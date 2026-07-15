// 11003번

#include <iostream>
#include <deque>

typedef std::pair<int, int> Node;

int main(){

    int N, L;
    std::cin >> N >> L;
    std::deque<Node> mydeque;    

    for (int i = 0; i < N; ++i){
        int n;
        std::cin >> n;
        
        while (mydeque.size() && mydeque.back().first > n){
            mydeque.pop_back();
        }
        mydeque.push_back(Node(n,i));
        if (mydeque.front().second <= i - L){
            mydeque.pop_front();
        }
        std::cout << mydeque.front().first << ' ';
    }
}
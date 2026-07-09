#include <iostream>

int main(){
    int N;
    std::cin >> N;

    long long sum = 1;
    int count = 1, s = 1, e = 1;

    while (e != N){
        if (sum > N)
        {
            sum -= s++;
        }
        else if(sum == N)
        {
            count++;
            sum += ++e;
        }
        else
        {
            sum += ++e;
        }

    }
    std::cout << count << "\n";
}

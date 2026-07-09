#include <iostream>

int checkarray[4];
int myarray[4];
int check = 0;
int total = 0;
int N, M;

void add();
void remove();

int main(){
    std::cin >> M >> N;
    std::string Ds;
    std::cin >> Ds;

    for (int i = 0; i < 4; ++i){
        std::cin >> checkarray[i];
    }
    for (int i = 0; i < N; ++i){
        add(Ds[i]);
    }
    if (check == 4){
        total++;
    }
    int s = 0 ,e = N-1;
    for (int i = N; i < M; ++i){
        s = i - N;
        e = i;
        check = 0;
        add(Ds[e]);
        remove(Ds[s]);
        if (check == 4){
            total++;
        }
    }
}
void remove(char a){
   if (a = 'A'){
        if (myarray[0] == checkarray[0]){
            check--;
        }
        myarray[0]--;
    }else if (a = 'C')
    {
        if (myarray[1] == checkarray[1]){
            check--;
        }
        myarray[1]--;
    }else if (a = 'G')
    {
        if (myarray[2] == checkarray[2]){
            check--;
        }
        myarray[2]--;
    }else if (a = 'T')
    {
        if (myarray[3] == checkarray[3]){
            check--;
        }
        myarray[3]--;
    }
}
void add(char a){
    if (a = 'A'){
        myarray[0]++;
        if (myarray[0] == checkarray[0]){
            check++;
        }
    }else if (a = 'C')
    {
        myarray[1]++;
        if (myarray[1] == checkarray[1]){
            check++;
        }
    }else if (a = 'G')
    {
        myarray[2]++;
        if (myarray[2] == checkarray[2]){
            check++;
        }
    }else if (a = 'T')
    {
        myarray[3]++;
        if (myarray[3] == checkarray[3]){
            check++;
        } 
    }
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    // 최대공약수 구하기
    for(int i=min(n,m);i>=1;i--){
        if(n%i==0 && m%i==0){
            answer.push_back(i);
            break;            
        }
    }
    
    // 최소공배수 구하기
    for(int i=min(n,m);i<=n*m;i++){
        if(i%n==0 && i%m==0){
            answer.push_back(i);
            break;
        }
    }
    return answer;
}
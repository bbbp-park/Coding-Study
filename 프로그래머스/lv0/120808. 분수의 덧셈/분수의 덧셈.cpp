#include <string>
#include <vector>

using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    int resultDenum = (denum1 * num2) + (denum2 * num1);
    int resultNum = num1 * num2;
    int maxNum = 1;
    
    for (int i = 1; i <= resultDenum ; i++) {
        if (resultDenum % i == 0 && resultNum % i == 0) {
            maxNum = i;
        }
    }
    vector<int> answer = {resultDenum / maxNum, resultNum / maxNum};
    return answer;
}
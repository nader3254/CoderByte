#include "main.h"

void generateParenthesis(int left, int right, string& s,vector<string>& answer)
{
    // terminate
    if (left == 0 && right == 0) {
        answer.push_back(s);
    }
 
    if (left > right || left < 0 || right < 0) {
        // wrong
        return;
    }
 
    s.push_back('{');
    generateParenthesis(left - 1, right, s, answer);
    s.pop_back();
 
    s.push_back('}');
    generateParenthesis(left, right - 1, s, answer);
    s.pop_back();


}
int BracketCombinations(int num) {
  
    vector<string> ans;
    string s;
    int n = num;
    generateParenthesis(n, n, s, ans);
    int x=0;
    for (auto k : ans) {
      x++;
    }
 
  return x;

}

int main(void) { 
   
  int n = 3;
  cout << BracketCombinations(3);
  return 0;
    
}
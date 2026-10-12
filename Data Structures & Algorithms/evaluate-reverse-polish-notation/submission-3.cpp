class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack{};

        std::unordered_set s{'+', '-', '/', '*'};
        for(const auto& t: tokens){
            if (t.size() != 1 || !s.contains(t[0])){
                stack.push(std::stoi(t));
                continue;
            }

            int num2 = stack.top();
            stack.pop();
            int num1 = stack.top();
            stack.pop();

            switch (t[0]){
                case '+': 
                    stack.push(num1+num2);
                    break;
                case '-':
                    stack.push(num1-num2);
                    break;
                case '*':
                    stack.push(num1*num2);
                    break;
                case '/':
                    stack.push(num1/num2);
                    break;
            }
        }
        return stack.top();
    }
};

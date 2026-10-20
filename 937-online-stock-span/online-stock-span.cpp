#include <vector>
#include <stack>

class StockSpanner {
    std::vector<int> prices;
    std::stack<int> st;
public:
    StockSpanner() {}
    
    int next(int price) {
        int currIndex = prices.size();
        prices.push_back(price);

        while (!st.empty() && prices[st.top()] <= price) {
            st.pop();
        }

        int span = st.empty() ? (currIndex + 1) : (currIndex - st.top());
        
        st.push(currIndex);
        return span;
    }
};
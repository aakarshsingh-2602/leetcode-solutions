class ProductOfNumbers {
private:
    vector<int>poop;
public:
    ProductOfNumbers() {
        
        
    }
    
    void add(int num) {
        poop.push_back(num);
    }
    
    int getProduct(int k) {
       int product = 1;
        int n = poop.size();
        for (int i = 0; i < k; i++) {
            product *= poop[n - 1 - i];
        }
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
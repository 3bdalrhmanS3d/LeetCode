class ProductOfNumbers {
public:
    vector<int> p = {1} ;
    int n = 1;
    ProductOfNumbers() {
        p.reserve(40000);
    }
    
    void add(int num) {
        if(num == 0)
        {
            p = {1} ;
            n = 1 ;
        }
        else
        {
            p.push_back(p[n++-1] * num );
        }
    }

    
    int getProduct(int k) {
        if(n <= k )
        {
            return 0;
        }
        return p[n-1]/p[n-k-1] ;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
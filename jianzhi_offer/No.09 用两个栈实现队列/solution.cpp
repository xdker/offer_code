class CQueue {
    stack<int> s1;
    stack<int> s2;
public:
    CQueue() {

    }
    
    void appendTail(int value) {
        s1.push(value);
    }
    
    int deleteHead() {
        if(s2.empty()){
            if(s1.empty())
            return -1;
            else{
                 while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
                }
            }
        }
        int ret=s2.top();
        s2.pop();
        return ret;
    }
};
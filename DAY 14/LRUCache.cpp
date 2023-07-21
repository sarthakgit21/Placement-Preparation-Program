    list<int> ls;
    map<int,pair<list<int>::iterator,int>> mp;
    int n=0;
    LRUCache(int capacity) {
        n=capacity;
    }
    
    void makeLRU(int key){
        ls.erase(mp[key].first);
        ls.push_front(key);
        mp[key].first=ls.begin();
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;
        makeLRU(key);
        return mp[key].second;
    }
    
    void put(int key, int value) {
        
        if(mp.find(key)!=mp.end()){
            mp[key].second=value;
            makeLRU(key);
        }
        else{
            ls.push_front(key);
            mp[key]={ls.begin(),value};
            n--;
        }
        
        if(n<0){
            auto it=ls.back();
            mp.erase(it);
            ls.pop_back();
            n++;
        }
        
        
    }

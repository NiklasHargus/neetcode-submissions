class TimeMap {
public:
    std::unordered_map<std::string, map<int, string>> m_;
    TimeMap() : m_{} {
    }
    
    void set(string key, string value, int timestamp) {
        m_[key].insert({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto it = m_[key].upper_bound(timestamp);
        return it == m_[key].begin() ? "" : prev(it)->second;
    }
};

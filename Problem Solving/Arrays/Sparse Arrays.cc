vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector <int> results;
    
    for(auto i: queries){
        int count = 0;
        for(auto j: strings){
            if(i == j){
                count++;
            }
        }
        results.emplace_back(count);
    }
    
    return results;
}

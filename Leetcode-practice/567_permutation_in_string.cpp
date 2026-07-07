class Solution{
    public:
    bool freq_check(int a[], int b[]){
        for(int i = 0; i<26; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2){
        if(s1.length() > s2.length()){
            return false;
        }
        int freq[26] = {0};
        // s1 freq count
        for(int i = 0; i< s1.length(); i++){
            freq[s1[i] - 'a']++;
        }

        int winsize = s1.length();
        int freqwin[26] = {0};
        // First window freq
        for(int i = 0; i<winsize; i++){
            freqwin[s2[i] - 'a']++;
        }

        // First window freq check
        if(freq_check(freq,freqwin)){
            return true;
        }

        for(int i = winsize; i < s2.length(); i++){
            // Add new charecter in the window
            freqwin[s2[i] - 'a']++;
            //Remove old charecter
            freqwin[s2[i - winsize] - 'a']--;
            if(freq_check(freq, freqwin)){
                return true;
            }
        }
      
        return false;
    }
};
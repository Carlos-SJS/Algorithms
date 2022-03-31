string multiply_string_int(string s, int n){
    int c = 0;
    for(int i = s.size()-1; i>=0; i--){
        c += (s[i]-48)*n;
        s[i] = 48+(c%10);
        c/=10;
    }
    if(c>0){s = to_string(c)+s;}
    return s;
}

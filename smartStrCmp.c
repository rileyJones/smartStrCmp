

int smartStrCmp(char* str1, char* str2) {
    if(str1[0] == '\0' && str2[0] == '\0') return 0;
    if(str1[0] == '\0') return -1;
    if(str2[0] == '\0') return 1;
    if((str1[0] >= '0' && str1[0] <= '9')&&(str1[0] >= '0' && str1[0] <= '9')) {
        int val1 = str1[0] - '0';
        str1++;
        while(str1[0] >= '0' && str1[0] <= '9') {
            val1*=10;
            val1+=str1[0]-'0';
            str1++;
        }
        int val2 = str2[0] - '0';
        str2++;
        while(str2[0] >= '0' && str2[0] <= '9') {
            val2*=10;
            val2+=str2[0]-'0';
            str2++;
        }
        if(val1 < val2) return -1;
        if(val1 > val2) return 1;
        return smartStrCmp(str1, str2);
    }
    if(str1[0] >= '0' && str1[0] <= '9') return -1;
    if(str2[0] >= '0' && str2[0] <= '9') return 1;
    if(str1[0] < str2[0]) return -1;
    if(str1[0] > str2[0]) return 1;
    return smartStrCmp(str1+1,str2+1);
}


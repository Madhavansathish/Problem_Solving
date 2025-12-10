int countMatches(char*** items, int itemsSize, int* itemsColSize, char* ruleKey, char* ruleValue) {
    int idx;
    if(strcmp(ruleKey,"type")==0)
        idx = 0;
    else if(strcmp(ruleKey,"color")==0)
        idx = 1;
    else
        idx = 2;

    int count = 0;
    for(int i = 0; i < itemsSize; i++) {
        if(strcmp(items[i][idx], ruleValue) == 0)
            count++;
    }
    return count;
}

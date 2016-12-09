int countSegments(char* s) {
    int answer = 0;
    char *temp;
    temp = strtok(s," ");

    while(temp!=NULL){
        answer ++;
        temp =  strtok(NULL," ");
    }
    return answer ;
}

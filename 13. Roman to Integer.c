int romanToInt(char * s){
    int total=0;
    int temp=0;
    for (int i=strlen(s)-1; i>-1;i--) {
        
        if (i==0) {
            printf("i is 0");
        }
        switch (s[i]) {
            case 'I': 
            if ((temp-1)>0){
                total=total-1;
            }
            else {
                total++;
            }
                break;
            case 'V':
                
                total=total+5;
                temp=5;
                break;
            case 'X':
                if (temp-10>0) {
                    total=total-10;
                }
                else {
                    total = total + 10;
                }
                temp=10;
                break;
            case 'L':
                
                total=total+50;
                temp=50;
                break;
            case 'C':
                
                if (temp-100>0) {
                    total=total-100;
                }
                else {
                    total = total + 100;
                }
                temp=100;
                break;
            case 'D':
                total=total+500;
                temp=500;
                break;
            case 'M':
                total=total+1000;
                temp=1000;
                break;
            default:
                break;
        }
    }
    return total;
}

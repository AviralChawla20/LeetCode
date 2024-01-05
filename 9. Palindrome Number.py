bool isPalindrome(int x){
    unsigned long int n,temp;
    n=0;
    temp=x;
    if (x<0){
        return false;
    }
    else if (x==0) {
        return true;
    }
    else {
        while(temp!=0){
            
            n=n*10;
            n=n+(temp%10);
            temp=temp/10;

        }
        if (n==x){
            return true;
        }
        else {
            return false;
        }
    }
}

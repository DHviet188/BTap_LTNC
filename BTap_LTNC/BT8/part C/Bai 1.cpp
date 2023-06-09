int strlen(char *s){
    int len=0;
    while (s[len]!='\0') len++;
    return len;
}

a. void reverse(char *s)
{
    int n=strlen(s);
    for (int i=0;i<n/2;i++)
    {
        char k=s[i];
        s[i] = s[n-i-1] ;
        s[n-1-i] = k;
    }
}

b. void delete_char(char *s, char c)
{
    int res = 0, count = 0;

    while (count < strlen(s))
    {
        if (s[count]!=c) 
        {   
            s[res] = S[count];
            res++;
        }
        count ++;    
    }
    s[res]='\0';
}

c. void pad_right(char *s, int n){
    int len=strlen(s);
    if (n>len){
        while(len<n){
            s[len]='_';
            len++;
        }
        s[len]='\0';
    }
}

d. void pad_left(char *s, int n){
    int len=strlen(s);
    if (len<n){
        while(len<n){
            for (int i=len-1;i>=0;i--){
                s[i+1]=s[i];
            }
            s[0]='_';
            len++;
        }
        s[len]='\0';
    }
}

e. void truncate(char *a, int n){
    int len = strlen(a);
    if (len>n){
        int i = len-1;
        while (len>n && i>=0){
            i--;
        }
        a[i+1]='\0';
    }
}

f. bool is_palindrome(char *a){
    int len = strlen(a);
    int cnt=0;
    for (int i=0; i<n/2; i++){
        if (s[i]=s[len-i-1]) cnt++;
        else return false;
    }
    return (cnt == len/2);
}

g. void trim_left(char *s){
    int i = 0, n = strlen (s) ;
    while (s[i] == ' '){
        i++ ;
    }
    while(i>0){
        for (int j=0;j<n-1;j++){
            s[j]=s[j+1];
        }
        i--;
    }
}

h. void trim_right(char *s){
    int i = strlen (s) - 1 ;
    while (s[i] == ' ' && i >= 0){
        i-- ;
    }
    s[i+1] = '\0';
}

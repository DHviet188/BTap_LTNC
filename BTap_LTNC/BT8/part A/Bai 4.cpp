int main()  { 
   char **s; 
   char foo[] = "Hello World"; 
   *s = foo; 
   printf("s is %s\n",s); 
   s[0] = foo; 
   printf("s[0] is %s\n",s[0]); 
   return(0); 
}

// l?i chua c?p ph�t d?ng 
// chua gi?i ph�ng con tr? sau khi s? d?ng

int main()   { 
   char **s = new char*; 
   char foo[] = "Hello World"; 
   *s = foo; 
   printf("s is %s\n",*s); 
   s[0] = foo; 
   printf("s[0] is %s\n",s[0]); 
   delete s; 
   return(0); 
}

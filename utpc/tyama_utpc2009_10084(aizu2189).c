main(a,b,c){for(a=b=-1;(c=getchar())!='\n';a++)b+=c-48;printf("%s wins.\n",(a+b/9)&1?"Fabre":"Audrey");exit(0);}
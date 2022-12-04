#include <stdio.h>

int main() {
//    char *address =  "辽宁 大连 高新园区达瓦达瓦";
//    char str[2][100];
//    sscanf(address,"%*s %s %8s",str[0],str[1]);
//    printf("%s\n",str[0]);
//    printf("%s\n",str[1]);

//    char *str = "2000 pker winkerw";
//    char buf[100];
//    sscanf(str,"%[a-z]",buf);
//    printf("%s\n",buf);
//    sscanf(str,"%[wikren ]",buf);
//    printf("%s\n",buf);
//    sscanf(str,"%[^wikren ]",buf);
//    printf("%s\n",buf);
    
    char *address =  "辽宁&大连&高新";
    char str[3][100];
    sscanf(address,"%[^&]&%[^&]&%[^&]",str[0],str[1],str[2]);
    printf("%s  %s  %s\n",str[0],str[1],str[2]);
    
    char* email = "kerwin@163.com";
    char buf[100];
    sscanf(email,"%[^@]",buf);
    printf("%s\n",buf);
    return 0;
}

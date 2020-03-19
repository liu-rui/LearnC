#include <stdio.h>
#include <time.h>
#include <hiredis/hiredis.h>

int main() {
    redisContext *c = redisConnect("127.0.0.1", 6379);

    if (c == NULL || c->err) {
        if (c) {
            printf("error: %s\n", c->errstr);
        } else {
            printf("can't allocate redis context \n");
        }
    } else {
        printf("ok %s\n");
    }
    redisReply *reply = redisCommand(c, "set %s %s", "aa", "dd");
    printf("set aa ; value: %s", reply->str);
    freeReplyObject(reply);

    reply = redisCommand(c, "get %s", "aa");
    printf("get aa ; value: %s", reply->str);
    freeReplyObject(reply);

    redisFree(c);
}

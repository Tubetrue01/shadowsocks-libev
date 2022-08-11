//
// Created by Tubetrue01 on 2022/8/10.
//
#include <string.h>
#include "streamingmedia.h"

int is_media(const char *hostname)
{
    char *netflix[11] = {"fast", "netflix", "flxvpn", "nflxext", "nflximg", "nflxsearch", "nflxso", "nflxvideo", "amazonaws", "apiproxy-device-prod-nlb-", "dualstack"};

    char *sub_str;
    for (int i = 0; i < 11; i++)
    {
        sub_str = strcasestr(hostname, netflix[i])
        if (sub_str)
        {
            return 1;
        }
    }
    return 0;
}

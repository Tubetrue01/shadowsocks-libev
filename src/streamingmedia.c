//
// Created by Tubetrue01 on 2022/8/10.
//
#include <string.h>
#include "streamingmedia.h"

int is_media(const char *hostname)
{
    char *netflix[11] = {"fast", "netflix", "flxvpn", "nflxext", "nflximg", "nflxsearch", "nflxso", "nflxvideo", "amazonaws", "apiproxy-device-prod-nlb-", "dualstack"};

    for (int i = 0; i < 11; i++)
    {
        if (strcasestr(hostname, netflix[i]))
        {
            return 1;
        }
    }
    return 0;
}

#ifndef PLAYER_H
#define PLAYER_H
#include<QDebug>

extern "C"{
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
#include <libswscale/swscale.h>
}

class player
{
public:
    player();
    AVFormatContext* format_context = NULL;



    bool openFile(const char*);
};

#endif // PLAYER_H

#include "player.h"

player::player()
{
    av_register_all();
}

bool player::openFile(const char *filename)
{
    int err = avformat_open_input(&format_context, filename, NULL, NULL);
    if(err<0)qDebug()<<"ffmpeg: Unable to open input file\n";
}

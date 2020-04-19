#include "player.h"

player::player()
{
    av_register_all();
}

bool player::openFile(QString filename="./RaspberryPi4.mp4")
{
    bool result {true};
    int err = avformat_open_input(&format_context, filename.toStdString().c_str(), NULL, NULL);
    if(err>=0)
    {
        err = avformat_find_stream_info(format_context, NULL);
        if (err < 0) {
            qDebug()<<"ffmpeg: Unable to find stream info\n";
            result = false;
        }
        else
        {
            qDebug()<<"Ffmpeg found stream!";
            av_dump_format(format_context, 0, filename.toStdString().c_str(), 0);
        }
    }
    else
    {
        qDebug()<<"ffmpeg: Unable to open input file\n";
        result = false;
    }
    return result;
}


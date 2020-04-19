#ifndef PLAYER_H
#define PLAYER_H
#include<QDebug>

extern "C"{
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
#include <libswscale/swscale.h>
}

class player: public QObject
{
    Q_OBJECT
    AVFormatContext* format_context = NULL;
public:
    player();
    Q_INVOKABLE bool openFile(QString);
};

#endif // PLAYER_H

#ifndef SCENE_H
#define SCENE_H
#include <QGraphicsScene>

class Scene:public QGraphicsScene
{
public:
    Scene();
private:
    int discs[8][4] ;
    void checkForWin(int,int);
};

#endif // SCENE_H

#ifndef ABSTRACTBODYPART_H
#define ABSTRACTBODYPART_H

#include <qtypes.h>
#include "src/item/abstractItem/abstractitem.h"

//身体部位枚举
enum BodyPart
{
    head,
    chest,
    armLeft,
    armRight,
    handLeft,
    handRight,
    leg,
    shoes
};

class AbstractBodyPart
{
public:
    AbstractBodyPart();
    //身体部位的名字
    BodyPart get_bodyPartName(void);
    //身体部位的健康值
    quint16 get_health(void);
    //身体部位的健康值上限
    quint16 get_health_UpLimit(void);
    //身体部位的健康值下限
    quint16 get_health_DownLimit(void);
    //身体部位的装备
    Item get_Equipment(void);
    //身体部位受到伤害
    void getDamage(quint16 damage);
    //身体部位得到恢复
    void getRecover(quint16 recover);

private:
    BodyPart bodyPartName;
    quint16 health;
    quint16 healthUpLimit;
    quint16 healthDownLimit;
    Item Equipment;
};

#endif // ABSTRACTBODYPART_H

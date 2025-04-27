#ifndef ABSTRACTBODY_H
#define ABSTRACTBODY_H

#include "abstractbodypart.h"

class AbstractBody
{
public:
    AbstractBody();
    //读取身体部位的装备
    Item get_ItemOfBody(BodyPart body);
    //身体部位是否损坏
    bool is_BodyDistory(BodyPart body);
    //身体部位健康值
    quint16 get_BodyHealth(BodyPart body);
    //身体部位健康值上限
    quint16 get_BodyHealth_UpLimit(BodyPart body);
    //身体部位健康值下限
    quint16 get_BodyHealth_DownLimit(BodyPart body);
    //身体部位受到伤害
    void getBodyDamage(BodyPart body, quint16 damage);
    //身体部位恢复血量
    void getBodyRecover(BodyPart body, quint16 recover);

private:
    AbstractBodyPart head;
    AbstractBodyPart chest;
    AbstractBodyPart armLeft;
    AbstractBodyPart armRight;
    AbstractBodyPart handLeft;
    AbstractBodyPart handRight;
    AbstractBodyPart leg;
    AbstractBodyPart shoes;
};

#endif // ABSTRACTBODY_H

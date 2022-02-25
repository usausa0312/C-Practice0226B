#include"using.h"
#include"algorithm.h"
#include"map.h"


int main()
{
    ///using

    // �����̌^�� Integer
    func<Test>(1);

    // �����̌^�� int.
    func<int>(2);

    ///algorithm
    ShowALG(a);
    ShowALG(b);
    ShowALG(c);

    /// pair�̗v�f�^�̃R���X�g���N�^������tuple�œn���č\�z
    std::pair<Point, Point> p
    (
        std::piecewise_construct,
        std::make_tuple(1, 2),//first
        std::make_tuple(3, 4)//second
    );

    std::cout << p.first << ", " << p.second << std::endl;

    return 1;

};

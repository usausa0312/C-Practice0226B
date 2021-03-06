#include"using.h"
#include"algorithm.h"
#include"map.h"


int main()
{
    ///using

    // 引数の型は Integer
    func<Test>(1);

    // 引数の型は int.
    func<int>(2);

    ///algorithm
    ShowALG(a);
    ShowALG(b);
    ShowALG(c);

    /// pairの要素型のコンストラクタ引数をtupleで渡して構築
    std::pair<Point, Point> p
    (
        std::piecewise_construct,
        std::make_tuple(1, 2),//first
        std::make_tuple(3, 4)//second
    );

    std::cout << p.first << ", " << p.second << std::endl;

    return 1;

};

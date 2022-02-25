#include"using.h"
#include"algorithm.h"
#include"map.h"


int main()
{
    ///using

    // ˆø”‚ÌŒ^‚Í Integer
    func<Test>(1);

    // ˆø”‚ÌŒ^‚Í int.
    func<int>(2);

    ///algorithm
    ShowALG(a);
    ShowALG(b);
    ShowALG(c);

    /// pair‚Ì—v‘fŒ^‚ÌƒRƒ“ƒXƒgƒ‰ƒNƒ^ˆø”‚ğtuple‚Å“n‚µ‚Ä\’z
    std::pair<Point, Point> p
    (
        std::piecewise_construct,
        std::make_tuple(1, 2),//first
        std::make_tuple(3, 4)//second
    );

    std::cout << p.first << ", " << p.second << std::endl;

    return 1;

};

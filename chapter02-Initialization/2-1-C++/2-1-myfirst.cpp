// 1.myfirst.cpp -- displays a message
#include <iostream>                             // a preprocessor directive
                                                // 预处理编译指令
int main()                                      // function header
{                                               // start of function body
    using namespace std;                        // make definitions visible
                                                // 名称空间 std::
    cout << "Come up and C++ me some time.";    // message
    cout << endl;                               // start a new line, or "\n"
    cout << "You won't regret it!" << endl;     // more output
    //cin.get();                                  // keep output window open
    return 0;                                   // terminate main()
    
}                                               // end of function body
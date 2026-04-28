import std;
import util;

int main()
{
    util::log("Hello Worlds from log!");
    util::log(std::format("Project version: {}", CXX_PROJECT_VERSION));

    return 0;
}

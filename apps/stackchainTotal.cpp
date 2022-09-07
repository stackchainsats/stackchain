#include <iostream>
int START=5;
int END=1641;
int main(int argc, char **argv)
{
    int start,end;
    if(argc>=3)
    {
        start = atoi(argv[1]); end= atoi(argv[2]);
    }
    else
    {
        start=START; end=END;
    }

    if(start>=end || start<=0)
    {
        std::cerr << "Start must be > 0 and > end" << std::endl;
        return 2;
    }
    int total = ((end)*(end+1)) / 2;
    total -= ((start-1)*(start)) / 2;
  
    std::cout << "Total = " << total << std::endl;
    return 0;
}

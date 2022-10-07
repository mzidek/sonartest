#include <stdint.h>

int main(void)
{
    uint32_t last_time;
    uint32_t current_time;

    if(last_time + 100 < current_time)
    {
        last_time = current_time;
    }

    return last_time;
}
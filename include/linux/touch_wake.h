/* include/linux/touch_wake.h */

#ifndef _LINUX_TOUCH_WAKE_H
#define _LINUX_TOUCH_WAKE_H

struct touchwake_implementation
{
    void (* enable)(void);
    void (* disable)(void);
};

void register_touchwake_implementation(struct touchwake_implementation * imp);
void powerkey_press(void);
void touch_press(void);
bool device_is_suspended(void);

#endif

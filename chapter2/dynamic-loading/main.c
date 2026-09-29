#include <stdio.h>
#include <dlfcn.h>

int main(void)
{
    void *handle = dlopen("./libplugin.so", RTLD_LAZY);

    if (handle == NULL)
    {
        fprintf(stderr, "%s\n", dlerror());
        return 1;
    }

    void (*hello)(void) = dlsym(handle, "hello");

    if (hello == NULL)
    {
        fprintf(stderr, "%s\n", dlerror());
        dlclose(handle);
        return 1;
    }

    hello();

    dlclose(handle);

    return 0;
}
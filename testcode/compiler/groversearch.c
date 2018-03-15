char buffer[300];
int value = 49;

void parameters(void *buf, int val)
{
    int y;
    y = buf @ val;
    return;
}

void immediates(void)
{
    int y;
    y = (void *)0x1000 @ 42;
    return;
}

void locals(void)
{
    int y;
    char *buf = (char *)0x2000;
    int val = 129;

    y = buf @ val;
    return;
}

void globals(void)
{
    int y;
    y = buffer @ value;
    return;
}


int example(void *b, int v)
{
    b = b;
    v = v;
    return 5;
}

int caller()
{
    return example(buffer, value);
}


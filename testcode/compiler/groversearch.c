char buffer[300];
int value = 49;
int grover_m = 3;

void parameters(void *buf, int val)
{
    int y;
    y = buf @[] val;
    return;
}

void immediates(void)
{
    int y;
    y = (void *)0x1000 @[] 42;
    return;
}

void locals(void)
{
    int y;
    char *buf = (char *)0x2000;
    int val = 129;

    y = buf @[] val;
    return;
}

void globals(void)
{
    int y;
    y = buffer @[] value;
    return;
}

void calibrate_immediates(void)
{
    int y;
    y = @[] = 8, buffer @[] value;
}

void calibrate_locals(void)
{
    int y;
    int x = 3;
    y = @[] = x, buffer @[] value;
}

void calibrate_globals(void)
{
    int y;
    y = @[] = grover_m, buffer @[] value;
}

/* General purpose calling convention example, for reference. */
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


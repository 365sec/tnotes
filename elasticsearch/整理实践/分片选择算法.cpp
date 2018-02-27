unsigned long hash(unsigned char *str)
{
    //hash种子
    unsigned long hash = 5381;
    int c;
    //遍历字符串中每一个字符
    while (c = *str++)
        //对hash种子 进行位运算 hash << 5表示 hash乘以32次方，再加上 hash 表示hash乘以33
        //然后再加上字符的ascii码，之后循环次操作
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    return hash;
}
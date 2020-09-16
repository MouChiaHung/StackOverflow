char callRSP[] = { 0xFF, 0xD4 };

void payload()
{
    printf("WOW!\n");
}
void UI()
{
    char name[16];
    printf("What's your name?\n");
    gets(name);
    printf("Hey %s, you're harmless, aren't you?\n", name);
}
int main()
{
    UI();
    return 0;
}
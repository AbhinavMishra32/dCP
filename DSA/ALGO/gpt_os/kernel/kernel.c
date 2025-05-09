void main() {
    char *video = (char*)0xb8000;
    const char *msg = "Hello, World!";
    for (int i = 0; msg[i] != '\0'; i++) {
        video[i * 2] = msg[i];
        video[i * 2 + 1] = 0x07;
    }
    while(1);
}


#include <stdio.h>

int main() {
    // Green color ANSI escape code
    const char *green = "\033[0;32m";
    const char *reset = "\033[0m";

    printf("%s", green);  // Set text to green

    printf(" __        __   _                            \n");
    printf(" \\ \\      / /__| | ___ ___  _ __ ___   ___  \n");
    printf("  \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ \n");
    printf("   \\ V  V /  __/ | (_| (_) | | | | | |  __/ \n");
    printf("    \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___| \n");

    printf("%s", reset);  // Reset to default color

    return 0;
}

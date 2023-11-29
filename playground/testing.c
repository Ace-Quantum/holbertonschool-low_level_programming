int main(void)
{
    size_t buffsize = 1024;
    char *buffer = malloc(buffsize * sizeof(char));
    char *str_temp;
    int characters;

    if (buffer == NULL)
    {
        perror("Buffer allocation failed.");
        exit(1);
    }

    while (!feof(stdin))
    {
        printf("$: ");
        characters = getline(&buffer, &buffsize, stdin);
        str_temp = strtok(buffer, " ");

        while (str_temp != NULL)
        {
            printf("%s\n", str_temp);
            str_temp = strtok(0, " ");
        }
    }
    return (0);
}
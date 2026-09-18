#include <stdio.h>
#include <string.h>

struct Asset {
    char id[20], name[30], type[20], ip[20], os[20];
    char dept[30], risk[15], status[15];
};

int main() {
    struct Asset a[50];
    int n = 0, ch, i;
    char id[20];

    while (1) {
        printf("\n1.Add  2.Search  3.Update  4.Delete  5.Display  6.Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("ID Name Type IP OS Dept Risk Status:\n");
            scanf("%s %s %s %s %s %s %s %s",
                  a[n].id, a[n].name, a[n].type, a[n].ip,
                  a[n].os, a[n].dept, a[n].risk, a[n].status);
            n++;
        }

        else if (ch == 2) {
            printf("Enter ID: ");
            scanf("%s", id);
            for (i = 0; i < n; i++)
                if (!strcmp(a[i].id, id))
                    printf("%s %s %s %s\n",
                           a[i].id, a[i].name, a[i].risk, a[i].status);
        }

        else if (ch == 3) {
            printf("Enter ID: ");
            scanf("%s", id);
            for (i = 0; i < n; i++)
                if (!strcmp(a[i].id, id)) {
                    printf("New Risk and Status: ");
                    scanf("%s %s", a[i].risk, a[i].status);
                }
        }

        else if (ch == 4) {
            printf("Enter ID: ");
            scanf("%s", id);
            for (i = 0; i < n; i++)
                if (!strcmp(a[i].id, id)) {
                    a[i] = a[--n];
                    break;
                }
        }

        else if (ch == 5) {
            for (i = 0; i < n; i++)
                printf("%s %s %s %s\n",
                       a[i].id, a[i].name, a[i].risk, a[i].status);
        }

        else if (ch == 6)
            break;
    }

    return 0;
}

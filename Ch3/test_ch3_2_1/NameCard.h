#define NAME_LEN 30
#define PHONE_LEN 30

typedef struct __namecard
{
    char name[NAME_LEN];
    char phone[PHONE_LEN];
}Namecard;

Namecard* MakenameCard(char *name, char *phone);

void ShowNameCardInfo(Namecard *pcard);

int NameCompare(Namecard *pcard, char *name);

void ChangePhoneNum(Namecard *pcard, char *phone);
#include "CMP3_MCI.h"
#include <stdio.h>
CMP3_MCI myMP3;
int main()
{
    myMP3.Load("song.mp3");
    myMP3.Play();

    printf("�{�b�b���A��J���@�ӼƦr:");
    int a;
    scanf("%d", &a);
}

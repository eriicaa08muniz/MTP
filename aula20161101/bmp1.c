#include <stdio.h>
#include<math.h>
struct Pixel{
    unsigned char R;
    unsigned char G;
    unsigned char B;
};
int main () {
    struct Pixel pixel;
    int WPX, HPX, BPP, NCP, NIC, PAL, lap;
    unsigned char byte;
    unsigned short word;
    unsigned int dword;
    FILE * imagem;
    imagem = fopen("oii.bmp","r");
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c", byte);
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c\n", byte);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do arquivo em (bytes): %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Informaçao reservada: %08X\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Offset: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do cabeçalho: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Largura da imagem (pixels): %u\n", dword);
    WPX = dword;
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Altura da imagem (pixels): %u\n", dword);
    HPX = dword;
    fread(&word, sizeof(word), 1, imagem);
    printf("Quantidade de planos de cores: %u\n", word);
    fread(&word, sizeof(word), 1, imagem);
    printf("Bites por pixel: %u\n", word);
    BPP = word;
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Metodo de compressao: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho da imagem (bytes): %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resoluçao horizontal: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resoluçao vertical: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    NCP = (dword == 0) ? 1 << BPP : dword;
    printf("Numero de cores na paleta: %u\n", NCP);
    fread(&dword, sizeof(dword), 1, imagem);
    NIC = (dword == 0) ?  NCP : dword;
    printf("Numero de cores importantes: %u\n", NIC);
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha da array de pixels (bytes): %u\n", PAL);
    lap = 0;
    printf("Pixels =========\n");
    while (!feof(imagem)){
        if(fread(&pixel, sizeof(pixel), 1, imagem))
            printf("R: %u, G: %u, B: %u\n", pixel.R, pixel.G, pixel.B);
        lap = lap +3;
        if((lap+3)> PAL){
            fseek(imagem, (PAL - lap), SEEK_CUR);
            lap = 0;
            }
        };


    fclose(imagem);

    return 0;
}


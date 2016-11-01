#include <stdio.h>
#include<math.h>
struct Pixel{
    unsigned char R;
    unsigned char G;
    unsigned char B;
};
int main () {
    struct Pixel pixel, pixel2;
    int WPX, HPX, BPP, NCP, NIC, PAL, lap, offset, i;
    unsigned char byte;
    unsigned short word;
    unsigned int dword;
    FILE * imagem;
    FILE * nova;
    imagem = fopen("sapo.bmp","r");
    nova = fopen("sapo2.bmp","w");
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
    offset = dword;
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
    nova = fopen("sapo2.bmp", "w");
    rewind(imagem);
    for(i=0; i<offset; i++){
        fread(&byte, sizeof(byte), 1, imagem);
        fwrite(&byte, sizeof(byte), 1, nova);


    }
    printf("Pixels =========\n");
    lap = 0;
    byte = 0;
    while (!feof(imagem)){
        if(fread(&pixel, sizeof(pixel), 1, imagem)){
            pixel2.R= pixel.G;
            pixel2.G= pixel.R;
            pixel2.B= pixel.B;
            fwrite(&pixel2, sizeof(pixel2), 1, nova);



        }

        lap = lap +3;
        if((lap+3)> PAL){
            fseek(imagem, (PAL - lap), SEEK_CUR);
            for(i=0; i<PAL - lap; i++){
                    fwrite(&byte, sizeof(byte), 1, nova);
            lap = 0;
            }
        }
    }

    fclose(nova);
    fclose(imagem);

    return 0;
}



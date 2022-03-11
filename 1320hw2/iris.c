#include "iris.h"

int main(int argc, char *argv[]) {
    float sepal_len_avg = 0;
    float sepal_wid_avg = 0;
    float petal_len_avg = 0;
    float petal_wid_avg = 0;
    if (argc != 2) {
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");

    if (!fp) {
        return 1;
    }

    char buffer[BUF_SIZE] = { 0 };
    int num_samples = 0;

    iris_t data[MAX_SAMPLES] = { 0 };

    while (fgets(buffer, BUF_SIZE, fp)) {
        trim(buffer);
        data[num_samples++] = parse_line(buffer);
    }

    printf("DATA SET: \n");
    printf("Sepal Length\tSepal Width\tPetal Length\tPetal Width\tSpecies\n");

    for (int i = 0; i < num_samples; i++) {
        char *name;
        name = data[i].name;
        char *ret;

        ret = strchr(name, '-');
        printf("%8.2f\t%8.2f\t%8.2f\t%8.2f\t", data[i].sepal_length, data[i].sepal_width, data[i].petal_length, data[i].petal_width);
        if(ret != NULL){
            ret++;
            printf("%6s\n", ret);
        }
        sepal_len_avg = sepal_len_avg + data[i].sepal_length;
        sepal_wid_avg = sepal_wid_avg + data[i].sepal_width;
        petal_len_avg = petal_len_avg + data[i].petal_length;
        petal_wid_avg = petal_wid_avg + data[i].petal_width;
    }

    printf("AVERAGES: \n");
    printf("Sepal Length\tSepal Width\tPetal Length\tPetal Width\n");
    printf("%8.2f\t%8.2f\t%8.2f\t%8.2f\n", sepal_len_avg/num_samples, sepal_wid_avg/num_samples, petal_len_avg/num_samples, petal_wid_avg/num_samples);

    fclose(fp);

    return 0;
}

iris_t parse_line(char *csv_line) {
    iris_t sample = { 0 };
    int num_feature = 0;

    char *token = strtok(csv_line, ",");

    while (token) {
        switch (num_feature) {
            case 0:
                sample.sepal_length = atof(token);
                break;
            case 1:
                sample.sepal_width = atof(token);
                break;
            case 2:
                sample.petal_length = atof(token);
                break;
            case 3:
                sample.petal_width = atof(token);
                break;
            case 4:
                strcpy(sample.name, token);
                break;
            default:
                printf("no\n");
        }
        num_feature++;
        token = strtok(NULL, ",");
    }

    return sample;
}

void trim(char *str) {
    int l = strlen(str);

    if (str[l - 1] == '\n') {
        str[l - 1] = 0;
    }
};

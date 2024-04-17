#include <stdio.h>
#include <stddef.h> // size_t를 사용하기 위해 필요한 헤더 파일

int main() {
    // 정수형 배열 선언
    int array[] = {10, 20, 30, 40, 50};

    // 배열의 요소 수 계산하여 size_t 변수에 할당
    size_t array_size = sizeof(array) / sizeof(array[0]);

    // %zu는 size_t를 출력하기 위한 서식 지정자
    printf("배열의 크기: %zu\n", array_size); 

    // 배열 요소 출력
    printf("배열의 요소:\n");
    for (size_t i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

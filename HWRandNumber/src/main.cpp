#include "main.h"

int main(int argc, char * argv[])
{

        print(5325);
    int input = {0};
    int is_true = 1;



//    while (!is_true)
//    {
//        puts(word);
//        scanf("%d", &input);
//
//        if(input < 0 || input > 99)
//        {
//
//            printf(answer);
//            print(input);
//
//            is_true = 0;
//        }
//        else
//        {
//            printf(err);
//        }
//    }

//    std::default_random_engine engine{0};
//    std::uniform_int_distribution<int> uniform_dist(0, input);

//    printf("%d", uniform_dist(engine));
#ifdef USE_GET_LENGTH_FUNCTION
    int exit_code = print(word);
#else
    int exit_code = print(word, 14);
#endif

    return
#ifdef USE_GET_LENGTH_FUNCTION
           exit_code == -1
        || exit_code != getStringLength(word) ?
#else
           exit_code == -1 ?
#endif
                EXIT_FAILURE : EXIT_SUCCESS;
}


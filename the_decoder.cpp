/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <cstdio>

int main(){
    char c;
    while (scanf("%c", &c) != EOF){
        if (c != '\n') printf("%c", c-7);
        else printf("\n");
    }
    return 0;
}

// submit in hackerrank only
#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
#include <stdio.h>
typedef struct Box
{
    int length, width, height;
}box;

int get_volume(box box1)
{
    return box1.length*box1.width*box1.height;
}

int is_lower_than_max_height(box box1)
{
    return box1.height < MAX_HEIGHT;
}


int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}

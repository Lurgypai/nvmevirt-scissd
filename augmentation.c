#include "augmentation.h"
#include <linux/delay.h>
#include <linux/highmem.h>

static void halvsies(void* source, void* dest, unsigned int nlb) {
}

static void saturation(void* source, void* dest, unsigned int nlb) {
	fsleep(4000);
}

static void translate(void* source, void* dest, unsigned int nlb) {
	fsleep(5000);
}

typedef void (*aug_func)(void*, void*, unsigned int);

static aug_func augs[] = {
	halvsies,
	saturation,
	translate
};

void augment(void* source, void* dest, unsigned int nlb, unsigned int aug) {
	augs[aug](source, dest, nlb);
}

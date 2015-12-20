#ifndef __BUNDLE_H__
#define __BUNDLE_H__

#include <stdint.h>
#include <vector>

#include "sam.h"

using namespace std;

class bundle
{
public:
	int32_t tid;				// chromosome ID
	int32_t lpos;				// the leftmost position
	int32_t rpos;				// the rightmost position
	vector<bam1_core_t> hits;	// store hits

public:
	bundle();

public:
	int add_hit(const bam1_core_t &p);
	int clear();
	int print();
};

#endif

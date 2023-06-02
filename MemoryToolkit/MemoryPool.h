#ifndef MEMORYPOOL_H
#define MEMORYPOOL_H
#include "MemoryBlock.h"

// We'll wory about smart pointer functionality later...
// also don't worry about memory alignment since it's not that big of a deal with modern processing power

namespace MEMORY {
class I_MemoryAllocator;
// linked list memory pool, where headers are stored with memory (inspired by DOOM 1993 system)
// TODO: Clean up stuff (get rid of points that are not needed, put const where it should go, stuff like that)
class I_MemoryPool {
public:
	I_MemoryPool();
	virtual ~I_MemoryPool();

	virtual I_MemoryBlock* allocate(int bytes) = 0;
	virtual void deallocate(I_MemoryBlock* block) = 0;
};


// I can't even remember if this works properly, I hope to God it does...
class SmartMemoryPool : public I_MemoryPool {
public:
	SmartMemoryPool(I_MemoryBlock* block);
	~SmartMemoryPool();

	virtual I_MemoryBlock* allocate(int bytes);
	virtual void deallocate(I_MemoryBlock* block);

	void PrintMemory();

	void CheckMemory();
private:
	friend class I_MemoryAllocator;

	struct header {
		header* next;
		header* before;
		int size;
		int id; // using an int to keep byte allignment
	};

	template <typename T> I_MemoryBlock* specific_allocate(int bytes);
	void* m_ptrStart;
	header* m_ptrStartLook;
	int m_size;

	header* m_tempLargestFreeBlock; // stores largest free block for use by proper allocator

	int m_numEntries;

};
// pretty much the same thing as smart memory pool, but faster
class FastMemoryPool : private SmartMemoryPool {
public:
	I_MemoryBlock* allocate(int bytes) override;
	void deallocate(I_MemoryBlock* ptr) override;

};

I_MemoryPool* g_MainMemoryPool;
	// main memory pool
}

#endif
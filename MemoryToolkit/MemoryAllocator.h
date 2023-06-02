#ifndef MEMORYALLOCATOR_H
#define MEMORYALLOCATOR_H

namespace MEMORY {
class I_MemoryBlock;
class MemoryPool;

class I_MemoryAllocator {
private:

public:
    I_MemoryAllocator() {/*exit program with error message*/}
    virtual ~I_MemoryAllocator() = 0;

    virtual I_MemoryBlock* allocate(MemoryPool* pool, int bytes) = 0;
    virtual void deallocate(I_MemoryBlock* block) = 0;
};

// allocates blocks that are continuous
class NormalMemoryAllocator : public I_MemoryAllocator {
private:

public:
    NormalMemoryAllocator();
    ~NormalMemoryAllocator() override;

    I_MemoryBlock* allocate(MemoryPool* pool, int bytes) override;
    void deallocate(I_MemoryBlock* block) override;
};

// allocates blocks that are not continuous (split by other blocks)
class SplitMemoryAllocator : public I_MemoryAllocator {
private:

public:
    SplitMemoryAllocator();
    ~SplitMemoryAllocator() override;

    I_MemoryBlock* allocate(MemoryPool* pool, int bytes) override;
    void deallocate(I_MemoryBlock* block) override;
};

};
#endif
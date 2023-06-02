#ifndef MEMORYBLOCK_H
#define MEMORYBLOCK_H

class I_MemoryAllocator;

// descries block of memory
class I_MemoryBlock {
private:
    
public:
    I_MemoryBlock();
    virtual ~I_MemoryBlock();

    struct MemoryBuffer {void* m_startptr; int m_bytes;};
    
    virtual I_MemoryAllocator* GetAllocator() = 0;

    virtual bool IsContinuous() = 0;

    // change this >:(      (maybe)
    virtual MemoryBuffer GetBuffer(void* idealptr, int idealsize = -1) = 0;
};

// will be split blocks and whole blocks
class ContinuousMemoryBlock : public I_MemoryBlock {
private:
    void* m_startptr;
    int m_bytes;
public:
    ContinuousMemoryBlock();
    ~ContinuousMemoryBlock();
    
    inline bool IsContinuous() override {return true;}

    inline I_MemoryBlock::MemoryBuffer GetBuffer(void* idealptr/*idealptr really does nothing in this function :/*/, int idealsize=-1) override {
        return {idealptr, 0};
    }

};

class SplitMemoryBlock : public I_MemoryBlock {
private:
    void* m_startptr;
    int m_bytes;

    void* m_tempbuffer;
    int m_tempbufferbytessize;
public:
    SplitMemoryBlock();
    ~SplitMemoryBlock();

    inline bool IsContinuous() override {return false;}

    I_MemoryBlock::MemoryBuffer GetBuffer(void* idealptr = nullptr, int idealsize=-1) override; // if code is not to big, make this inline as well
};


#endif
#ifndef MEMORYPOOL_H
#define MEMORYPOOL_H

namespace CEGUI {
		namespace MEMORY {
				// linked list memory pool, where headers are stored with memory (inspired by DOOM 1993 system)
				class MemoryPool {
				public:
					MemoryPool(int bytes);
					~MemoryPool();

					void* allocate(int bytes);
					void deallocate(void* ptr);

					void PrintMemory();

					void CheckMemory();
				private:
					struct header {
						header* next;
						header* before;
						int size;
						int id; // using an int to keep byte allignment
					};

					void* m_ptrStart;
					header* m_ptrStartLook;
					int m_size;

					int m_numEntries;

				};
				
		}
}


#endif
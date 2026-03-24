#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_READERWRITERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB90B10)

namespace System::Threading
{
	inline static constexpr unsigned int ReaderWriterCount_TypeDefinitionIndex = 4335;

	class ReaderWriterCount : public ::System::Object
	{
	public:
		::System::Threading::ReaderWriterCount* next; // 0x10
		::System::Int64 lockID; // 0x18
		::System::Int32 readercount; // 0x20
		::System::Int32 writercount; // 0x24
		::System::Int32 upgradecount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERCOUNT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x1B7763D0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1B7763C0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_OFFSET UNITYSDK_OFFSET(0x1B7763B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_1_OFFSET UNITYSDK_OFFSET(0x1B776410)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_OFFSET UNITYSDK_OFFSET(0x1B776400)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1B7763F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCK_OFFSET UNITYSDK_OFFSET(0x1B7763E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int Unsafe_TypeDefinitionIndex = 6517;

	class Unsafe : public ::System::Object
	{
	public:
		static ::System::Void CopyBlock(::System::Void* destination, ::System::Void* source, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_OFFSET))(destination, source, byteCount);
		}

		static ::System::Void CopyBlock_1(::System::Byte& destination, ::System::Byte& source, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCK_1_OFFSET))(destination, source, byteCount);
		}

		static ::System::Void CopyBlockUnaligned(::System::Void* destination, ::System::Void* source, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_COPYBLOCKUNALIGNED_OFFSET))(destination, source, byteCount);
		}

		static ::System::Void InitBlock(::System::Void* startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCK_OFFSET))(startAddress, value, byteCount);
		}

		static ::System::Void InitBlock_1(::System::Byte& startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCK_1_OFFSET))(startAddress, value, byteCount);
		}

		static ::System::Void InitBlockUnaligned(::System::Void* startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_OFFSET))(startAddress, value, byteCount);
		}

		static ::System::Void InitBlockUnaligned_1(::System::Byte& startAddress, ::System::Byte value, ::System::UInt32 byteCount)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFE_INITBLOCKUNALIGNED_1_OFFSET))(startAddress, value, byteCount);
		}
	};
}

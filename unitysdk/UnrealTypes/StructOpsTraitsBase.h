#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNREALTYPES_STRUCTOPSTRAITSBASE_GET_CANMOVE_OFFSET UNITYSDK_OFFSET(0x1A211A10)
#define UNREALTYPES_STRUCTOPSTRAITSBASE_GET_CANZEROCREATE_OFFSET UNITYSDK_OFFSET(0x1A211A20)
#define UNREALTYPES_STRUCTOPSTRAITSBASE_GET_HASALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1A211A30)
#define UNREALTYPES_STRUCTOPSTRAITSBASE_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1A2119E0)
#define UNREALTYPES_STRUCTOPSTRAITSBASE_GET_SHOULDCLONE_OFFSET UNITYSDK_OFFSET(0x1A2119F0)
#define UNREALTYPES_STRUCTOPSTRAITSBASE_GET_SHOULDDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A211A00)
#define UNREALTYPES_STRUCTOPSTRAITSBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A201E60)

namespace UnrealTypes
{
	inline static constexpr unsigned int StructOpsTraitsBase_TypeDefinitionIndex = 24697;

	class StructOpsTraitsBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTOPSTRAITSBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTOPSTRAITSBASE_GET_ISPLAINOLDDATA_OFFSET))(this);
		}

		::System::Boolean get_ShouldClone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTOPSTRAITSBASE_GET_SHOULDCLONE_OFFSET))(this);
		}

		::System::Boolean get_ShouldDispose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTOPSTRAITSBASE_GET_SHOULDDISPOSE_OFFSET))(this);
		}

		::System::Boolean get_CanMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTOPSTRAITSBASE_GET_CANMOVE_OFFSET))(this);
		}

		::System::Boolean get_CanZeroCreate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTOPSTRAITSBASE_GET_CANZEROCREATE_OFFSET))(this);
		}

		::System::Boolean get_HasAllocator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTOPSTRAITSBASE_GET_HASALLOCATOR_OFFSET))(this);
		}
	};
}

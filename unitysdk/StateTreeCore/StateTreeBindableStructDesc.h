#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTreeBindableStructSource.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace System { class String; }

#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x3B0960)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_RESET_OFFSET UNITYSDK_OFFSET(0x8EAF40)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8EAFD0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeBindableStructDesc_TypeDefinitionIndex = 26960;

	struct alignas(4) StateTreeBindableStructDesc
	{
		::UnrealTypes::FStructHandle Struct; // 0x10
		::Foundation::Unreal::FName Name; // 0x14
		::StateTreeCore::StateTreeDataHandle DataHandle; // 0x1C
		::StateTreeCore::StateTreeBindableStructSource DataSource; // 0x24

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_RESET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_TOSTRING_OFFSET))(this);
		}
	};
}

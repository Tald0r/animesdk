#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVESETCLASSTYPETONULLONSCHEDULEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C33C80)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeSetClassTypeToNullOnScheduleAttribute_TypeDefinitionIndex = 5107;

	class NativeSetClassTypeToNullOnScheduleAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVESETCLASSTYPETONULLONSCHEDULEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

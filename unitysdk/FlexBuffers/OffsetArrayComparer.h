#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLEXBUFFERS_OFFSETARRAYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A860DD0)
#define FLEXBUFFERS_OFFSETARRAYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A860E40)
#define FLEXBUFFERS_OFFSETARRAYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A851CE0)

namespace FlexBuffers
{
	inline static constexpr unsigned int OffsetArrayComparer_TypeDefinitionIndex = 8744;

	class OffsetArrayComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_OFFSETARRAYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::Il2CppArray<::System::Int64>* x, ::Il2CppArray<::System::Int64>* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int64>*, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_OFFSETARRAYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::Il2CppArray<::System::Int64>* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_OFFSETARRAYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}

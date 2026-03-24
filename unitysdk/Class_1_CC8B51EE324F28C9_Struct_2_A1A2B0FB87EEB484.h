#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_43108451FB8C5B3C.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_CC8B51EE324F28C9_STRUCT_2_A1A2B0FB87EEB484__CTOR_OFFSET UNITYSDK_OFFSET(0x329890)

inline static constexpr unsigned int Class_1_CC8B51EE324F28C9_Struct_2_A1A2B0FB87EEB484_TypeDefinitionIndex = 68736;

struct alignas(8) Class_1_CC8B51EE324F28C9_Struct_2_A1A2B0FB87EEB484
{
	::System::String* Field_2_0; // 0x10
	::System::Type* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::Enum_3_43108451FB8C5B3C Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x29

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Enum_3_43108451FB8C5B3C a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Enum_3_43108451FB8C5B3C, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC8B51EE324F28C9_STRUCT_2_A1A2B0FB87EEB484__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_19B7C5138FC90FBC.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define CLASS_3_3AF0234FCEE2AD8F_METHOD_3_2C0DDE22CA1C73CB_OFFSET UNITYSDK_OFFSET(0x7E93410)
#define CLASS_3_3AF0234FCEE2AD8F_METHOD_3_9F049CD313DA262B_OFFSET UNITYSDK_OFFSET(0x7E93350)
#define CLASS_3_3AF0234FCEE2AD8F__CTOR_OFFSET UNITYSDK_OFFSET(0x7E93340)

inline static constexpr unsigned int Class_3_3AF0234FCEE2AD8F_TypeDefinitionIndex = 52216;

class Class_3_3AF0234FCEE2AD8F : public ::Class_2_19B7C5138FC90FBC
{
public:
	::System::Int32 Field_3_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3AF0234FCEE2AD8F__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_B196590B3E289741 Method_3_9F049CD313DA262B(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_3AF0234FCEE2AD8F_METHOD_3_9F049CD313DA262B_OFFSET))(this, a1);
	}

	::Struct_2_B196590B3E289741 Method_3_2C0DDE22CA1C73CB(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_3AF0234FCEE2AD8F_METHOD_3_2C0DDE22CA1C73CB_OFFSET))(this, a1);
	}
};

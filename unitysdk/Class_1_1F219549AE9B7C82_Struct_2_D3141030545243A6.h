#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_1F219549AE9B7C82_STRUCT_2_D3141030545243A6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x318410)
#define CLASS_1_1F219549AE9B7C82_STRUCT_2_D3141030545243A6__CTOR_OFFSET UNITYSDK_OFFSET(0x318400)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Struct_2_D3141030545243A6_TypeDefinitionIndex = 57098;

struct alignas(8) Class_1_1F219549AE9B7C82_Struct_2_D3141030545243A6
{
	::System::Text::StringBuilder* Field_2_0; // 0x10

	::System::Void _ctor(::System::Text::StringBuilder* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_D3141030545243A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_D3141030545243A6_DISPOSE_OFFSET))(this);
	}
};

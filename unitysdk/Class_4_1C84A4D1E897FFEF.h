#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_1C84A4D1E897FFEF_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x6C184C0)
#define CLASS_4_1C84A4D1E897FFEF_METHOD_4_17040E9C6A729799_OFFSET UNITYSDK_OFFSET(0x6C186B0)
#define CLASS_4_1C84A4D1E897FFEF_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x6C18BE0)
#define CLASS_4_1C84A4D1E897FFEF__CTOR_OFFSET UNITYSDK_OFFSET(0x6C18AB0)

inline static constexpr unsigned int Class_4_1C84A4D1E897FFEF_TypeDefinitionIndex = 67211;

class Class_4_1C84A4D1E897FFEF : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Single>* Field_4_1; // 0x28
	::Class_4_D0B094D0B900A9F0<::System::Single>* Field_4_2; // 0x30
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C84A4D1E897FFEF__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C84A4D1E897FFEF_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_17040E9C6A729799(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_1C84A4D1E897FFEF_METHOD_4_17040E9C6A729799_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C84A4D1E897FFEF_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};

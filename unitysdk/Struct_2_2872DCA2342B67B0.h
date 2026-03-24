#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0269E9CD0547602F.h"
#include "unitysdk/Enum_3_CBD75F282C7514DC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_2872DCA2342B67B0_METHOD_2_ED0E3DD53734BBBE_OFFSET UNITYSDK_OFFSET(0x92A9210)
#define STRUCT_2_2872DCA2342B67B0_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x36DDD0)
#define STRUCT_2_2872DCA2342B67B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x92A9180)
#define STRUCT_2_2872DCA2342B67B0__CTOR_OFFSET UNITYSDK_OFFSET(0x36DD80)

inline static constexpr unsigned int Struct_2_2872DCA2342B67B0_TypeDefinitionIndex = 70158;

struct alignas(8) Struct_2_2872DCA2342B67B0
{
	static ::Il2CppArray<::Struct_2_2872DCA2342B67B0>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::Struct_2_2872DCA2342B67B0>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_2872DCA2342B67B0_TypeDefinitionIndex)->GetStaticField(0x30650);
	}
	::Enum_3_CBD75F282C7514DC Field_2_1; // 0x10
	::System::Boolean Field_2_2; // 0x11
	::System::String* Field_2_3; // 0x18
	::System::String* Field_2_4; // 0x20

	::System::Void _ctor(::Enum_3_CBD75F282C7514DC a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CBD75F282C7514DC, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_2872DCA2342B67B0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_2872DCA2342B67B0__CCTOR_OFFSET))();
	}

	static ::Struct_2_2872DCA2342B67B0 Method_2_ED0E3DD53734BBBE(::Enum_3_0269E9CD0547602F a1)
	{
		return ((::Struct_2_2872DCA2342B67B0(*)(::Enum_3_0269E9CD0547602F))((::PBYTE)hIl2Cpp + STRUCT_2_2872DCA2342B67B0_METHOD_2_ED0E3DD53734BBBE_OFFSET))(a1);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2872DCA2342B67B0_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}
};

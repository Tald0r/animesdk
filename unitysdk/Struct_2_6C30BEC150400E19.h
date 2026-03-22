#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0269E9CD0547602F.h"
#include "unitysdk/Enum_3_CBD75F282C7514DC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_6C30BEC150400E19_METHOD_2_ED0E3DD53734BBBE_OFFSET UNITYSDK_OFFSET(0x9F151E0)
#define STRUCT_2_6C30BEC150400E19_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x374D00)
#define STRUCT_2_6C30BEC150400E19__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F150D0)
#define STRUCT_2_6C30BEC150400E19__CTOR_OFFSET UNITYSDK_OFFSET(0x374CB0)

inline static constexpr unsigned int Struct_2_6C30BEC150400E19_TypeDefinitionIndex = 75742;

struct alignas(8) Struct_2_6C30BEC150400E19
{
	static ::Il2CppArray<::Struct_2_6C30BEC150400E19>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::Struct_2_6C30BEC150400E19>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6C30BEC150400E19_TypeDefinitionIndex)->GetStaticField(0x313A0);
	}
	::Enum_3_CBD75F282C7514DC Field_2_1; // 0x10
	::System::Boolean Field_2_2; // 0x11
	::System::String* Field_2_3; // 0x18
	::System::String* Field_2_4; // 0x20

	::System::Void _ctor(::Enum_3_CBD75F282C7514DC a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CBD75F282C7514DC, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_6C30BEC150400E19__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6C30BEC150400E19__CCTOR_OFFSET))();
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6C30BEC150400E19_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	static ::Struct_2_6C30BEC150400E19 Method_2_ED0E3DD53734BBBE(::Enum_3_0269E9CD0547602F a1)
	{
		return ((::Struct_2_6C30BEC150400E19(*)(::Enum_3_0269E9CD0547602F))((::PBYTE)hIl2Cpp + STRUCT_2_6C30BEC150400E19_METHOD_2_ED0E3DD53734BBBE_OFFSET))(a1);
	}
};

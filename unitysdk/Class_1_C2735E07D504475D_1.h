#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F817449EE3DD0C4;
class Class_2_18804FF7C23FF19F;
namespace System { class Type; }

#define CLASS_1_C2735E07D504475D_1_METHOD_1_3F7D432C99ECDDFB_OFFSET UNITYSDK_OFFSET(0x15ABD370)
#define CLASS_1_C2735E07D504475D_1_METHOD_1_665AEDC8E03BB561_OFFSET UNITYSDK_OFFSET(0x15ABD3B0)
#define CLASS_1_C2735E07D504475D_1_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x15ABD3F0)
#define CLASS_1_C2735E07D504475D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABD360)

inline static constexpr unsigned int Class_1_C2735E07D504475D_1_TypeDefinitionIndex = 74754;

class Class_1_C2735E07D504475D_1 : public ::System::Object
{
public:
	static ::Class_2_18804FF7C23FF19F** StaticGet_Field_1_0()
	{
		return (::Class_2_18804FF7C23FF19F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2735E07D504475D_1_TypeDefinitionIndex)->GetStaticField(0x2F5E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2735E07D504475D_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_3F7D432C99ECDDFB(::Class_2_18804FF7C23FF19F* a1)
	{
		return ((::System::Void(*)(::Class_2_18804FF7C23FF19F*))((::PBYTE)hIl2Cpp + CLASS_1_C2735E07D504475D_1_METHOD_1_3F7D432C99ECDDFB_OFFSET))(a1);
	}

	static ::Class_2_18804FF7C23FF19F* Method_1_665AEDC8E03BB561()
	{
		return ((::Class_2_18804FF7C23FF19F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2735E07D504475D_1_METHOD_1_665AEDC8E03BB561_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2735E07D504475D_1_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}
};

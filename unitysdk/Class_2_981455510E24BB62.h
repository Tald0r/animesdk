#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_981455510E24BB62_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0xBCDE5A0)
#define CLASS_2_981455510E24BB62_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xBCDE4F0)
#define CLASS_2_981455510E24BB62_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBCDE620)
#define CLASS_2_981455510E24BB62__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCDE460)
#define CLASS_2_981455510E24BB62__CTOR_OFFSET UNITYSDK_OFFSET(0xBCDE4D0)

inline static constexpr unsigned int Class_2_981455510E24BB62_TypeDefinitionIndex = 43358;

class Class_2_981455510E24BB62 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xD1; // 0x0
	::System::String* Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_981455510E24BB62__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_981455510E24BB62__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_981455510E24BB62_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_981455510E24BB62_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_981455510E24BB62_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

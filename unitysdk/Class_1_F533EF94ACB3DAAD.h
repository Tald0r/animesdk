#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A585DEB704A07E2;

#define CLASS_1_F533EF94ACB3DAAD_METHOD_1_670F9011F4A497FF_OFFSET UNITYSDK_OFFSET(0x9679180)
#define CLASS_1_F533EF94ACB3DAAD_METHOD_1_A780420962C5A1CC_OFFSET UNITYSDK_OFFSET(0x96790A0)
#define CLASS_1_F533EF94ACB3DAAD_METHOD_1_E83D3547A9015657_OFFSET UNITYSDK_OFFSET(0x9679260)
#define CLASS_1_F533EF94ACB3DAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x9679170)

inline static constexpr unsigned int Class_1_F533EF94ACB3DAAD_TypeDefinitionIndex = 60275;

class Class_1_F533EF94ACB3DAAD : public ::System::Object
{
public:
	::Class_1_5A585DEB704A07E2* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F533EF94ACB3DAAD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A780420962C5A1CC(::Class_1_5A585DEB704A07E2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A585DEB704A07E2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F533EF94ACB3DAAD_METHOD_1_A780420962C5A1CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_670F9011F4A497FF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F533EF94ACB3DAAD_METHOD_1_670F9011F4A497FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E83D3547A9015657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F533EF94ACB3DAAD_METHOD_1_E83D3547A9015657_OFFSET))(this);
	}
};

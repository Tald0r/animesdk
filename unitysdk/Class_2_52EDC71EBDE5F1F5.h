#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002EE73D986F5EA.h"

class Class_2_F5737224A0253470;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_52EDC71EBDE5F1F5_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0xAC0F3D0)
#define CLASS_2_52EDC71EBDE5F1F5_METHOD_2_DD8578A1FD699A08_OFFSET UNITYSDK_OFFSET(0xAC0EF00)
#define CLASS_2_52EDC71EBDE5F1F5__CTOR_OFFSET UNITYSDK_OFFSET(0xAC0EE30)

inline static constexpr unsigned int Class_2_52EDC71EBDE5F1F5_TypeDefinitionIndex = 80060;

class Class_2_52EDC71EBDE5F1F5 : public ::Class_1_3002EE73D986F5EA
{
public:
	::System::String* Field_2_0; // 0x18
	::Class_2_F5737224A0253470* Field_2_4; // 0x20
	::System::Action* Field_2_3; // 0x28
	::System::Int32 Field_2_1; // 0x30
	::System::Boolean Field_2_2; // 0x34
	::System::Single Field_2_5; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_52EDC71EBDE5F1F5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DD8578A1FD699A08(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_52EDC71EBDE5F1F5_METHOD_2_DD8578A1FD699A08_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52EDC71EBDE5F1F5_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}
};

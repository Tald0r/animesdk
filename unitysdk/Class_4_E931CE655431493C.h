#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_CF43FA1E89397A1C;
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_E931CE655431493C_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x6490660)
#define CLASS_4_E931CE655431493C_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x6490040)
#define CLASS_4_E931CE655431493C_METHOD_4_A7701B15CA39FC1B_OFFSET UNITYSDK_OFFSET(0x64901A0)
#define CLASS_4_E931CE655431493C__CTOR_OFFSET UNITYSDK_OFFSET(0x6490530)

inline static constexpr unsigned int Class_4_E931CE655431493C_TypeDefinitionIndex = 51893;

class Class_4_E931CE655431493C : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E931CE655431493C__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E931CE655431493C_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_A7701B15CA39FC1B(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_E931CE655431493C_METHOD_4_A7701B15CA39FC1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E931CE655431493C_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};

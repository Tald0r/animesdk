#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_CF43FA1E89397A1C;
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_F3F60E313B7A3053_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xB1377B0)
#define CLASS_4_F3F60E313B7A3053_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB1371E0)
#define CLASS_4_F3F60E313B7A3053_METHOD_4_AD35F4723EBA1A1A_OFFSET UNITYSDK_OFFSET(0xB137340)
#define CLASS_4_F3F60E313B7A3053__CTOR_OFFSET UNITYSDK_OFFSET(0xB137680)

inline static constexpr unsigned int Class_4_F3F60E313B7A3053_TypeDefinitionIndex = 37668;

class Class_4_F3F60E313B7A3053 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F3F60E313B7A3053__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F3F60E313B7A3053_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_AD35F4723EBA1A1A(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_F3F60E313B7A3053_METHOD_4_AD35F4723EBA1A1A_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F3F60E313B7A3053_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};

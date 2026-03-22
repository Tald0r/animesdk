#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_40B7079B36B2CF84_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA672460)
#define CLASS_4_40B7079B36B2CF84_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA671EA0)
#define CLASS_4_40B7079B36B2CF84_METHOD_4_9D7A9451E63F9903_OFFSET UNITYSDK_OFFSET(0xA672000)
#define CLASS_4_40B7079B36B2CF84__CTOR_OFFSET UNITYSDK_OFFSET(0xA672370)

inline static constexpr unsigned int Class_4_40B7079B36B2CF84_TypeDefinitionIndex = 55606;

class Class_4_40B7079B36B2CF84 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_40B7079B36B2CF84__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_40B7079B36B2CF84_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_9D7A9451E63F9903(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_40B7079B36B2CF84_METHOD_4_9D7A9451E63F9903_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_40B7079B36B2CF84_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};

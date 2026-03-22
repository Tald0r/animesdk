#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageShow; }
namespace System { class Action; }

#define CLASS_1_631249CE7F13BAC7_CLASS_1_02CA5BAB3572CAC7_METHOD_1_D866ECA54F5F752A_OFFSET UNITYSDK_OFFSET(0xF49ABB0)
#define CLASS_1_631249CE7F13BAC7_CLASS_1_02CA5BAB3572CAC7__CTOR_OFFSET UNITYSDK_OFFSET(0xF49ABA0)

inline static constexpr unsigned int Class_1_631249CE7F13BAC7_Class_1_02CA5BAB3572CAC7_TypeDefinitionIndex = 47529;

class Class_1_631249CE7F13BAC7_Class_1_02CA5BAB3572CAC7 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_631249CE7F13BAC7_CLASS_1_02CA5BAB3572CAC7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D866ECA54F5F752A(::MoleMole::ConfigUIMainPageShow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageShow*))((::PBYTE)hIl2Cpp + CLASS_1_631249CE7F13BAC7_CLASS_1_02CA5BAB3572CAC7_METHOD_1_D866ECA54F5F752A_OFFSET))(this, a1);
	}
};

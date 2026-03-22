#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FeverConfig; }
namespace System { class Action; }

#define CLASS_1_8E00AA9EEE182AD5_CLASS_1_FA75CD5716DC873E_METHOD_1_78AD390C160BDD2E_OFFSET UNITYSDK_OFFSET(0x8DA3BA0)
#define CLASS_1_8E00AA9EEE182AD5_CLASS_1_FA75CD5716DC873E__CTOR_OFFSET UNITYSDK_OFFSET(0x8DA3B90)

inline static constexpr unsigned int Class_1_8E00AA9EEE182AD5_Class_1_FA75CD5716DC873E_TypeDefinitionIndex = 40677;

class Class_1_8E00AA9EEE182AD5_Class_1_FA75CD5716DC873E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E00AA9EEE182AD5_CLASS_1_FA75CD5716DC873E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_78AD390C160BDD2E(::MoleMole::FeverConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FeverConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8E00AA9EEE182AD5_CLASS_1_FA75CD5716DC873E_METHOD_1_78AD390C160BDD2E_OFFSET))(this, a1);
	}
};

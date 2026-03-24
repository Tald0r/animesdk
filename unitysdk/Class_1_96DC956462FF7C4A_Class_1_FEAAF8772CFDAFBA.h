#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class GamifiedPropConfig; }
namespace System { class Action; }

#define CLASS_1_96DC956462FF7C4A_CLASS_1_FEAAF8772CFDAFBA_METHOD_1_7F859BD99DDCCAB5_OFFSET UNITYSDK_OFFSET(0x9336E10)
#define CLASS_1_96DC956462FF7C4A_CLASS_1_FEAAF8772CFDAFBA__CTOR_OFFSET UNITYSDK_OFFSET(0x9336E00)

inline static constexpr unsigned int Class_1_96DC956462FF7C4A_Class_1_FEAAF8772CFDAFBA_TypeDefinitionIndex = 59886;

class Class_1_96DC956462FF7C4A_Class_1_FEAAF8772CFDAFBA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96DC956462FF7C4A_CLASS_1_FEAAF8772CFDAFBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F859BD99DDCCAB5(::MoleMole::Config::GamifiedPropConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::GamifiedPropConfig*))((::PBYTE)hIl2Cpp + CLASS_1_96DC956462FF7C4A_CLASS_1_FEAAF8772CFDAFBA_METHOD_1_7F859BD99DDCCAB5_OFFSET))(this, a1);
	}
};

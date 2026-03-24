#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLockTargetMisc; }
namespace System { class Action; }

#define CLASS_1_887DD3CF562F14DB_CLASS_1_FE29A06E57A22A4B_METHOD_1_CDEA8789B2425846_OFFSET UNITYSDK_OFFSET(0x97A39B0)
#define CLASS_1_887DD3CF562F14DB_CLASS_1_FE29A06E57A22A4B__CTOR_OFFSET UNITYSDK_OFFSET(0x97A39A0)

inline static constexpr unsigned int Class_1_887DD3CF562F14DB_Class_1_FE29A06E57A22A4B_TypeDefinitionIndex = 72561;

class Class_1_887DD3CF562F14DB_Class_1_FE29A06E57A22A4B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_FE29A06E57A22A4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CDEA8789B2425846(::MoleMole::Config::ConfigLockTargetMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLockTargetMisc*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_FE29A06E57A22A4B_METHOD_1_CDEA8789B2425846_OFFSET))(this, a1);
	}
};

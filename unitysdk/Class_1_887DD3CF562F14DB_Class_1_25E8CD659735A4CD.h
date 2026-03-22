#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_887DD3CF562F14DB_Class_1_7C782EB43E203637;
namespace MoleMole::Config { class ConfigLockTargets; }

#define CLASS_1_887DD3CF562F14DB_CLASS_1_25E8CD659735A4CD_METHOD_1_ADAFB2BB4FFE9F38_OFFSET UNITYSDK_OFFSET(0x628BFA0)
#define CLASS_1_887DD3CF562F14DB_CLASS_1_25E8CD659735A4CD__CTOR_OFFSET UNITYSDK_OFFSET(0x628BF90)

inline static constexpr unsigned int Class_1_887DD3CF562F14DB_Class_1_25E8CD659735A4CD_TypeDefinitionIndex = 75758;

class Class_1_887DD3CF562F14DB_Class_1_25E8CD659735A4CD : public ::System::Object
{
public:
	::Class_1_887DD3CF562F14DB_Class_1_7C782EB43E203637* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_25E8CD659735A4CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ADAFB2BB4FFE9F38(::MoleMole::Config::ConfigLockTargets* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLockTargets*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_25E8CD659735A4CD_METHOD_1_ADAFB2BB4FFE9F38_OFFSET))(this, a1);
	}
};

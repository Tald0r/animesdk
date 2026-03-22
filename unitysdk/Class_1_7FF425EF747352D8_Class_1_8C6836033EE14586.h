#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF425EF747352D8_Class_1_883ADE4270632287;
namespace MoleMole::Config { class ConfigEntitySkills; }

#define CLASS_1_7FF425EF747352D8_CLASS_1_8C6836033EE14586_METHOD_1_87A8203A5BF1EF32_OFFSET UNITYSDK_OFFSET(0x8147840)
#define CLASS_1_7FF425EF747352D8_CLASS_1_8C6836033EE14586__CTOR_OFFSET UNITYSDK_OFFSET(0x8147830)

inline static constexpr unsigned int Class_1_7FF425EF747352D8_Class_1_8C6836033EE14586_TypeDefinitionIndex = 67078;

class Class_1_7FF425EF747352D8_Class_1_8C6836033EE14586 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::Class_1_7FF425EF747352D8_Class_1_883ADE4270632287* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_8C6836033EE14586__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_87A8203A5BF1EF32(::MoleMole::Config::ConfigEntitySkills* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySkills*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_8C6836033EE14586_METHOD_1_87A8203A5BF1EF32_OFFSET))(this, a1);
	}
};

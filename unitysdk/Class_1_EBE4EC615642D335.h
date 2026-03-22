#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_606D5F46CB5A2580.h"
#include "unitysdk/Struct_2_96AF1FF555C6D2CD.h"
#include "unitysdk/System/Object.h"

class Class_2_785FDC7D0DA58280;
namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectData; }

#define CLASS_1_EBE4EC615642D335_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x162B49A0)
#define CLASS_1_EBE4EC615642D335_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x162B4B60)
#define CLASS_1_EBE4EC615642D335__CTOR_OFFSET UNITYSDK_OFFSET(0x162B4990)

inline static constexpr unsigned int Class_1_EBE4EC615642D335_TypeDefinitionIndex = 79755;

class Class_1_EBE4EC615642D335 : public ::System::Object
{
public:
	::Struct_2_96AF1FF555C6D2CD Field_1_0; // 0x10
	::Class_2_785FDC7D0DA58280* Field_1_1; // 0x40
	::MoleMole::Arcade::CompanionProject::CpSkillEffectData* Field_1_3; // 0x48
	::System::Boolean Field_1_4; // 0x50
	::Struct_2_606D5F46CB5A2580 Field_1_2; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBE4EC615642D335__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBE4EC615642D335_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBE4EC615642D335_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

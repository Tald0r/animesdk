#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_15CCFE77B9E12299;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_BC9CB4886AA0B65E_CLASS_1_C03AAC1A35BC2324_METHOD_1_E7580ECED8D03E1C_OFFSET UNITYSDK_OFFSET(0x92C82C0)
#define CLASS_1_BC9CB4886AA0B65E_CLASS_1_C03AAC1A35BC2324__CTOR_OFFSET UNITYSDK_OFFSET(0x92C82B0)

inline static constexpr unsigned int Class_1_BC9CB4886AA0B65E_Class_1_C03AAC1A35BC2324_TypeDefinitionIndex = 71538;

class Class_1_BC9CB4886AA0B65E_Class_1_C03AAC1A35BC2324 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::Class_1_15CCFE77B9E12299* Field_1_0; // 0x18
	::System::Int32 Field_1_6; // 0x20
	::System::Single Field_1_3; // 0x24
	::MoleMole::Level::BangbooPlayType Field_1_5; // 0x28
	::UnityEngine::Vector3 Field_1_2; // 0x2C
	::System::Boolean Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC9CB4886AA0B65E_CLASS_1_C03AAC1A35BC2324__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7580ECED8D03E1C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_BC9CB4886AA0B65E_CLASS_1_C03AAC1A35BC2324_METHOD_1_E7580ECED8D03E1C_OFFSET))(this, a1);
	}
};

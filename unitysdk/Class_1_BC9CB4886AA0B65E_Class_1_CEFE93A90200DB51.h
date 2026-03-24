#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7A5F167CAAA013FB;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_BC9CB4886AA0B65E_CLASS_1_CEFE93A90200DB51_METHOD_1_4C7AA62905DC1988_OFFSET UNITYSDK_OFFSET(0x9052540)
#define CLASS_1_BC9CB4886AA0B65E_CLASS_1_CEFE93A90200DB51__CTOR_OFFSET UNITYSDK_OFFSET(0x9052530)

inline static constexpr unsigned int Class_1_BC9CB4886AA0B65E_Class_1_CEFE93A90200DB51_TypeDefinitionIndex = 64938;

class Class_1_BC9CB4886AA0B65E_Class_1_CEFE93A90200DB51 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::Class_1_7A5F167CAAA013FB* Field_1_0; // 0x18
	::System::Boolean Field_1_4; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x24
	::System::Int32 Field_1_6; // 0x30
	::System::Single Field_1_3; // 0x34
	::MoleMole::Level::BangbooPlayType Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC9CB4886AA0B65E_CLASS_1_CEFE93A90200DB51__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4C7AA62905DC1988(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_BC9CB4886AA0B65E_CLASS_1_CEFE93A90200DB51_METHOD_1_4C7AA62905DC1988_OFFSET))(this, a1);
	}
};

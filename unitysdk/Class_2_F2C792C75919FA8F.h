#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_F2C792C75919FA8F_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x9679C50)
#define CLASS_2_F2C792C75919FA8F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x967A090)
#define CLASS_2_F2C792C75919FA8F_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x9679F00)
#define CLASS_2_F2C792C75919FA8F__CTOR_OFFSET UNITYSDK_OFFSET(0x967A080)

inline static constexpr unsigned int Class_2_F2C792C75919FA8F_TypeDefinitionIndex = 54759;

class Class_2_F2C792C75919FA8F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x30
	::MoleMole::MonoGamepadCustomList* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x48
	::MonoUITableScrollV2* Field_2_7; // 0x50
	::UnityEngine::Transform* Field_2_0; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C792C75919FA8F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2C792C75919FA8F_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2C792C75919FA8F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C792C75919FA8F_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}
};

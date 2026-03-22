#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_94D5884806027679_2_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x81A0840)
#define CLASS_2_94D5884806027679_2_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x81A05D0)
#define CLASS_2_94D5884806027679_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x81A0980)
#define CLASS_2_94D5884806027679_2__CTOR_OFFSET UNITYSDK_OFFSET(0x81A0970)

inline static constexpr unsigned int Class_2_94D5884806027679_2_TypeDefinitionIndex = 77006;

class Class_2_94D5884806027679_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x20
	::UnityEngine::GameObject* Field_2_9; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94D5884806027679_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94D5884806027679_2_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94D5884806027679_2_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94D5884806027679_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

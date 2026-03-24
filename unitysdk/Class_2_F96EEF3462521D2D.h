#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_F96EEF3462521D2D_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x800EC20)
#define CLASS_2_F96EEF3462521D2D_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x800E980)
#define CLASS_2_F96EEF3462521D2D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x800ED60)
#define CLASS_2_F96EEF3462521D2D__CTOR_OFFSET UNITYSDK_OFFSET(0x800ED50)

inline static constexpr unsigned int Class_2_F96EEF3462521D2D_TypeDefinitionIndex = 45064;

class Class_2_F96EEF3462521D2D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::Transform* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_9; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_10; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x48
	::UnityEngine::Animation* Field_2_5; // 0x50
	::UnityEngine::Transform* Field_2_2; // 0x58
	::UnityEngine::RectTransform* Field_2_6; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_11; // 0x68
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F96EEF3462521D2D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F96EEF3462521D2D_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F96EEF3462521D2D_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F96EEF3462521D2D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_B4510DBCAFB79958_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x8501FF0)
#define CLASS_2_B4510DBCAFB79958_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x8501DC0)
#define CLASS_2_B4510DBCAFB79958_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x85020A0)
#define CLASS_2_B4510DBCAFB79958__CTOR_OFFSET UNITYSDK_OFFSET(0x8502090)

inline static constexpr unsigned int Class_2_B4510DBCAFB79958_TypeDefinitionIndex = 53964;

class Class_2_B4510DBCAFB79958 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::UnityEngine::Transform* Field_2_4; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x48
	::UnityEngine::GameObject* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4510DBCAFB79958__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B4510DBCAFB79958_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B4510DBCAFB79958_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4510DBCAFB79958_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};

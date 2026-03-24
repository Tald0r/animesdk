#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_CD3DD745FAE9C3D4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x6F714A0)
#define CLASS_2_CD3DD745FAE9C3D4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6F71540)
#define CLASS_2_CD3DD745FAE9C3D4_METHOD_2_F87973A9CF5B5F69_OFFSET UNITYSDK_OFFSET(0x6F71290)
#define CLASS_2_CD3DD745FAE9C3D4__CTOR_OFFSET UNITYSDK_OFFSET(0x6F71530)

inline static constexpr unsigned int Class_2_CD3DD745FAE9C3D4_TypeDefinitionIndex = 48482;

class Class_2_CD3DD745FAE9C3D4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::UnityEngine::CanvasGroup* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_1; // 0x30
	::UnityEngine::UI::RawImage* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F87973A9CF5B5F69(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4_METHOD_2_F87973A9CF5B5F69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

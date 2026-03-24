#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_6D7677793BF052C1_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x9DF9AB0)
#define CLASS_2_6D7677793BF052C1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9DF9B80)
#define CLASS_2_6D7677793BF052C1_METHOD_2_E2771629F876FF04_OFFSET UNITYSDK_OFFSET(0x9DF98C0)
#define CLASS_2_6D7677793BF052C1__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF9B70)

inline static constexpr unsigned int Class_2_6D7677793BF052C1_TypeDefinitionIndex = 61997;

class Class_2_6D7677793BF052C1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UIImgText* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D7677793BF052C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E2771629F876FF04(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D7677793BF052C1_METHOD_2_E2771629F876FF04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D7677793BF052C1_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D7677793BF052C1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

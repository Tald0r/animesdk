#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_D3704D04572A8616_Class_2_BE5D25EF31E0E752_2;
class MonoUIDailyQuestParam;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_D3704D04572A8616_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x6557160)
#define CLASS_2_D3704D04572A8616_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x6557390)
#define CLASS_2_D3704D04572A8616_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6557480)
#define CLASS_2_D3704D04572A8616__CTOR_OFFSET UNITYSDK_OFFSET(0x6557470)

inline static constexpr unsigned int Class_2_D3704D04572A8616_TypeDefinitionIndex = 65864;

class Class_2_D3704D04572A8616 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::MonoUIDailyQuestParam* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x38
	::MonoUITableScrollV2* Field_2_2; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_D3704D04572A8616_Class_2_BE5D25EF31E0E752_2*>* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3704D04572A8616__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D3704D04572A8616_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3704D04572A8616_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D3704D04572A8616_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

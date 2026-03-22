#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_544549712B2B2CA5_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x7CEA690)
#define CLASS_2_544549712B2B2CA5_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x7CEA470)
#define CLASS_2_544549712B2B2CA5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7CEA740)
#define CLASS_2_544549712B2B2CA5__CTOR_OFFSET UNITYSDK_OFFSET(0x7CEA730)

inline static constexpr unsigned int Class_2_544549712B2B2CA5_TypeDefinitionIndex = 53532;

class Class_2_544549712B2B2CA5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::GameObject* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x50
	::UnityEngine::RectTransform* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_544549712B2B2CA5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_544549712B2B2CA5_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_544549712B2B2CA5_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_544549712B2B2CA5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

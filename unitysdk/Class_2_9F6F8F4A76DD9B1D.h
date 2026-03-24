#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_CA67A9CEB871FFD3;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITutorialScrollWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0xB12AC60)
#define CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xB12AED0)
#define CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB12B030)
#define CLASS_2_9F6F8F4A76DD9B1D__CTOR_OFFSET UNITYSDK_OFFSET(0xB12B020)

inline static constexpr unsigned int Class_2_9F6F8F4A76DD9B1D_TypeDefinitionIndex = 65350;

class Class_2_9F6F8F4A76DD9B1D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x38
	::MonoUITableScrollV2* Field_2_3; // 0x40
	::Class_2_CA67A9CEB871FFD3* Field_2_5; // 0x48
	::Class_3_647A206587033F4E<::MoleMole::UITutorialScrollWidgetController*>* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F6F8F4A76DD9B1D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9F6F8F4A76DD9B1D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

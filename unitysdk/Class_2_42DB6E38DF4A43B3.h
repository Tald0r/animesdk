#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityMiniMenuInputConfig; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class LayoutElement; }

#define CLASS_2_42DB6E38DF4A43B3_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x974B360)
#define CLASS_2_42DB6E38DF4A43B3_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x974B5B0)
#define CLASS_2_42DB6E38DF4A43B3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x974B6A0)
#define CLASS_2_42DB6E38DF4A43B3__CTOR_OFFSET UNITYSDK_OFFSET(0x974B690)

inline static constexpr unsigned int Class_2_42DB6E38DF4A43B3_TypeDefinitionIndex = 37737;

class Class_2_42DB6E38DF4A43B3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::LayoutElement* Field_2_2; // 0x18
	::MoleMole::UIMainCityMiniMenuInputConfig* Field_2_8; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::UIControllerExtensionData* Field_2_1; // 0x40
	::UnityEngine::UI::HorizontalLayoutGroup* Field_2_5; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x50
	::UnityEngine::RectTransform* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42DB6E38DF4A43B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_42DB6E38DF4A43B3_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_42DB6E38DF4A43B3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42DB6E38DF4A43B3_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};

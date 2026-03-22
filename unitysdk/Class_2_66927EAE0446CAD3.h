#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class Mono2dMapData; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class ScrollRectEx; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define CLASS_2_66927EAE0446CAD3_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x9E40830)
#define CLASS_2_66927EAE0446CAD3_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x9E405D0)
#define CLASS_2_66927EAE0446CAD3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9E40920)
#define CLASS_2_66927EAE0446CAD3__CTOR_OFFSET UNITYSDK_OFFSET(0x9E40910)

inline static constexpr unsigned int Class_2_66927EAE0446CAD3_TypeDefinitionIndex = 60341;

class Class_2_66927EAE0446CAD3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_7; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::ScrollRectEx* Field_2_4; // 0x28
	::MoleMole::Mono2dMapData* Field_2_6; // 0x30
	::Class_2_CA67A9CEB871FFD3* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_2; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x48
	::UnityEngine::RectTransform* Field_2_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66927EAE0446CAD3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_66927EAE0446CAD3_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66927EAE0446CAD3_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_66927EAE0446CAD3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

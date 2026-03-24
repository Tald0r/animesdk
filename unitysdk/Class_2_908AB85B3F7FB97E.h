#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWishlistSkillItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_908AB85B3F7FB97E_METHOD_2_1EA8DC71148E403D_OFFSET UNITYSDK_OFFSET(0x15670F10)
#define CLASS_2_908AB85B3F7FB97E_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x15670CE0)
#define CLASS_2_908AB85B3F7FB97E_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x15671110)
#define CLASS_2_908AB85B3F7FB97E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15671200)
#define CLASS_2_908AB85B3F7FB97E__CTOR_OFFSET UNITYSDK_OFFSET(0x156711F0)

inline static constexpr unsigned int Class_2_908AB85B3F7FB97E_TypeDefinitionIndex = 81073;

class Class_2_908AB85B3F7FB97E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_5; // 0x18
	::UnityEngine::GameObject* Field_2_4; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIWishlistSkillItemWidgetController*>*>* Field_2_1; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_908AB85B3F7FB97E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_908AB85B3F7FB97E_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_908AB85B3F7FB97E_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIWishlistSkillItemWidgetController*>*>* Method_2_1EA8DC71148E403D(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIWishlistSkillItemWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_908AB85B3F7FB97E_METHOD_2_1EA8DC71148E403D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_908AB85B3F7FB97E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class GraphicCast; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_63749397973686B2_METHOD_2_3268E77CB5B2C305_OFFSET UNITYSDK_OFFSET(0x8862CF0)
#define CLASS_2_63749397973686B2_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x8862E60)
#define CLASS_2_63749397973686B2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8862F50)
#define CLASS_2_63749397973686B2_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x8862A30)
#define CLASS_2_63749397973686B2__CTOR_OFFSET UNITYSDK_OFFSET(0x8862F40)

inline static constexpr unsigned int Class_2_63749397973686B2_TypeDefinitionIndex = 36552;

class Class_2_63749397973686B2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x18
	::UnityEngine::RectTransform* Field_2_7; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>* Field_2_5; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40
	::Class_2_9E3E3CDA608A4F58* Field_2_3; // 0x48
	::UnityEngine::CanvasGroup* Field_2_6; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x58
	::UnityEngine::CanvasGroup* Field_2_4; // 0x60
	::UnityEngine::RectTransform* Field_2_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63749397973686B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_63749397973686B2_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63749397973686B2_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>* Method_2_3268E77CB5B2C305(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_63749397973686B2_METHOD_2_3268E77CB5B2C305_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_63749397973686B2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

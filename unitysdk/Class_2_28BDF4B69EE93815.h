#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UINewsStandPuzzlePieceWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_28BDF4B69EE93815_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x917DFC0)
#define CLASS_2_28BDF4B69EE93815_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x917E2F0)
#define CLASS_2_28BDF4B69EE93815_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x917DC80)
#define CLASS_2_28BDF4B69EE93815_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x917E130)
#define CLASS_2_28BDF4B69EE93815__CTOR_OFFSET UNITYSDK_OFFSET(0x917E2E0)

inline static constexpr unsigned int Class_2_28BDF4B69EE93815_TypeDefinitionIndex = 40304;

class Class_2_28BDF4B69EE93815 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_13; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_11; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x38
	::UnityEngine::Transform* Field_2_8; // 0x40
	::UnityEngine::UI::GridLayoutGroup* Field_2_2; // 0x48
	::UIControllerExtensionData* Field_2_3; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x58
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UINewsStandPuzzlePieceWidgetController*>* Field_2_5; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_14; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_12; // 0x78
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x80
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_6; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_D7C82C373A53D1D3_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xA0A9CE0)
#define CLASS_2_D7C82C373A53D1D3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA0A9E50)
#define CLASS_2_D7C82C373A53D1D3_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0xA0A99E0)
#define CLASS_2_D7C82C373A53D1D3__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A9E40)

inline static constexpr unsigned int Class_2_D7C82C373A53D1D3_TypeDefinitionIndex = 64186;

class Class_2_D7C82C373A53D1D3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x18
	::MoleMole::MonoGamepadNavigatableList* Field_2_3; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_12; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x40
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralSortWidgetController*>* Field_2_6; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_11; // 0x50
	::MonoUITableScrollV2* Field_2_2; // 0x58
	::MoleMole::MonoGamepadModule* Field_2_5; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x68
	::MonoUITableScrollV2* Field_2_0; // 0x70
	::Class_2_60DDD9C206686F44* Field_2_10; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C82C373A53D1D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D7C82C373A53D1D3_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C82C373A53D1D3_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D7C82C373A53D1D3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

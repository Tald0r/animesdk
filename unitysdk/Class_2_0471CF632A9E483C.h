#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class MonoLayoutElementProcessor;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOnlinePlayerItemWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_0471CF632A9E483C_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x90E5D80)
#define CLASS_2_0471CF632A9E483C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x90E5EA0)
#define CLASS_2_0471CF632A9E483C_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x90E5AC0)
#define CLASS_2_0471CF632A9E483C__CTOR_OFFSET UNITYSDK_OFFSET(0x90E5E90)

inline static constexpr unsigned int Class_2_0471CF632A9E483C_TypeDefinitionIndex = 74927;

class Class_2_0471CF632A9E483C : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoLayoutElementProcessor* Field_2_9; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x28
	::UnityEngine::RectTransform* Field_2_10; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x38
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIOnlinePlayerItemWidgetController*>* Field_2_2; // 0x40
	::UnityEngine::RectTransform* Field_2_5; // 0x48
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIOnlinePlayerItemWidgetController*>* Field_2_7; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0471CF632A9E483C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0471CF632A9E483C_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0471CF632A9E483C_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0471CF632A9E483C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

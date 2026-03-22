#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_57F4F2E1F75850CE_Class_2_5A533685E4896551;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkBenchTrustDegreeDetailsCardWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_57F4F2E1F75850CE_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x5E30AB0)
#define CLASS_2_57F4F2E1F75850CE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x5E30C30)
#define CLASS_2_57F4F2E1F75850CE_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x5E30800)
#define CLASS_2_57F4F2E1F75850CE__CTOR_OFFSET UNITYSDK_OFFSET(0x5E30C20)

inline static constexpr unsigned int Class_2_57F4F2E1F75850CE_TypeDefinitionIndex = 70726;

class Class_2_57F4F2E1F75850CE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_57F4F2E1F75850CE_Class_2_5A533685E4896551*>* Field_2_9; // 0x20
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIWorkBenchTrustDegreeDetailsCardWidgetController*>* Field_2_4; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_57F4F2E1F75850CE_Class_2_5A533685E4896551*>* Field_2_8; // 0x30
	::MonoUITableScrollV2* Field_2_3; // 0x38
	::MonoUITableScrollV2* Field_2_5; // 0x40
	::MoleMole::MonoGamepadNavigatableList* Field_2_6; // 0x48
	::MoleMole::MonoGamepadModule* Field_2_7; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x58
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57F4F2E1F75850CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_57F4F2E1F75850CE_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57F4F2E1F75850CE_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_57F4F2E1F75850CE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

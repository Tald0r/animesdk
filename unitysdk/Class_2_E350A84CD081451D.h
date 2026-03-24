#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_E350A84CD081451D_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x9562190)
#define CLASS_2_E350A84CD081451D_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x9562480)
#define CLASS_2_E350A84CD081451D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9562620)
#define CLASS_2_E350A84CD081451D__CTOR_OFFSET UNITYSDK_OFFSET(0x9562610)

inline static constexpr unsigned int Class_2_E350A84CD081451D_TypeDefinitionIndex = 38383;

class Class_2_E350A84CD081451D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_11; // 0x18
	::MonoUITableScrollV2* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_12; // 0x40
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralRewardListBtnWidgetController*>* Field_2_3; // 0x48
	::UnityEngine::RectTransform* Field_2_10; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x58
	::UnityEngine::Transform* Field_2_2; // 0x60
	::UnityEngine::Transform* Field_2_4; // 0x68
	::UnityEngine::Transform* Field_2_5; // 0x70
	::MonoUITableScrollV2* Field_2_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E350A84CD081451D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E350A84CD081451D_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E350A84CD081451D_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E350A84CD081451D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

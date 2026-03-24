#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_5A4B16E4725097CC_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x6B45E90)
#define CLASS_2_5A4B16E4725097CC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6B460A0)
#define CLASS_2_5A4B16E4725097CC_METHOD_2_E171F3958EB08A5E_OFFSET UNITYSDK_OFFSET(0x6B45F70)
#define CLASS_2_5A4B16E4725097CC_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x6B45D00)
#define CLASS_2_5A4B16E4725097CC_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x6B46030)
#define CLASS_2_5A4B16E4725097CC__CTOR_OFFSET UNITYSDK_OFFSET(0x6B46020)

inline static constexpr unsigned int Class_2_5A4B16E4725097CC_TypeDefinitionIndex = 47074;

class Class_2_5A4B16E4725097CC : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_1; // 0x20
	::MoleMole::MonoGamepadNavigatableList* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4B16E4725097CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5A4B16E4725097CC_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E171F3958EB08A5E(::MoleMole::UIControlCollection* a1, ::Class_2_777A5D016ADC7368* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + CLASS_2_5A4B16E4725097CC_METHOD_2_E171F3958EB08A5E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_777A5D016ADC7368* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + CLASS_2_5A4B16E4725097CC_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4B16E4725097CC_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5A4B16E4725097CC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

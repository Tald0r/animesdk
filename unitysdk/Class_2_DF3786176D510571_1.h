#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_DF3786176D510571_1_Class_2_0876E59DDB7B6CE0;
class Class_2_DF3786176D510571_1_Class_2_0876E59DDB7B6CE0_1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_DF3786176D510571_1_METHOD_2_25F259344056A8EA_OFFSET UNITYSDK_OFFSET(0xBCF7A20)
#define CLASS_2_DF3786176D510571_1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xBCF7C60)
#define CLASS_2_DF3786176D510571_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBCF7D80)
#define CLASS_2_DF3786176D510571_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBCF7D70)

inline static constexpr unsigned int Class_2_DF3786176D510571_1_TypeDefinitionIndex = 44216;

class Class_2_DF3786176D510571_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIFriendChatCommonInfoUIWidgetController*>* Field_2_1; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_DF3786176D510571_1_Class_2_0876E59DDB7B6CE0*>* Field_2_3; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_DF3786176D510571_1_Class_2_0876E59DDB7B6CE0_1*>* Field_2_2; // 0x28
	::Class_3_647A206587033F4E<::MoleMole::UIFriendChatCommonTopUIWidgetController*>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_25F259344056A8EA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_1_METHOD_2_25F259344056A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF3786176D510571_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

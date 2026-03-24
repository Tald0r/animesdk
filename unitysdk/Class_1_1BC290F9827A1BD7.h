#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E7A4A4735E163CEB.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIInputFieldEx; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1BC290F9827A1BD7_METHOD_1_0287A932E5CC7E66_1_OFFSET UNITYSDK_OFFSET(0x76EB5E0)
#define CLASS_1_1BC290F9827A1BD7_METHOD_1_0287A932E5CC7E66_2_OFFSET UNITYSDK_OFFSET(0x76EB680)
#define CLASS_1_1BC290F9827A1BD7_METHOD_1_0287A932E5CC7E66_OFFSET UNITYSDK_OFFSET(0x76EAFE0)
#define CLASS_1_1BC290F9827A1BD7_METHOD_1_24AE0B16C654D410_OFFSET UNITYSDK_OFFSET(0x76EB0A0)
#define CLASS_1_1BC290F9827A1BD7_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x76EBA80)
#define CLASS_1_1BC290F9827A1BD7_METHOD_1_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x76EB6F0)
#define CLASS_1_1BC290F9827A1BD7_METHOD_1_601400950C766661_OFFSET UNITYSDK_OFFSET(0x76EB1E0)
#define CLASS_1_1BC290F9827A1BD7_METHOD_1_862329920B8ADE9E_OFFSET UNITYSDK_OFFSET(0x76EAEE0)
#define CLASS_1_1BC290F9827A1BD7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x76EB5D0)
#define CLASS_1_1BC290F9827A1BD7_METHOD_1_BCFDF34D93C9F44D_OFFSET UNITYSDK_OFFSET(0x76EB530)
#define CLASS_1_1BC290F9827A1BD7_METHOD_1_DF7A8DC1A1E1DC1E_OFFSET UNITYSDK_OFFSET(0x76EAE50)
#define CLASS_1_1BC290F9827A1BD7__CTOR_OFFSET UNITYSDK_OFFSET(0x76EA590)

inline static constexpr unsigned int Class_1_1BC290F9827A1BD7_TypeDefinitionIndex = 67442;

class Class_1_1BC290F9827A1BD7 : public ::System::Object
{
public:
	::MoleMole::MonoGamepadModule* Field_1_2; // 0x10
	::System::Action* Field_1_12; // 0x18
	::MoleMole::UIInputFieldEx* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Action*>* Field_1_4; // 0x28
	::System::Action* Field_1_10; // 0x30
	::System::Action* Field_1_8; // 0x38
	::MoleMole::MonoGamepadSelectable* Field_1_1; // 0x40
	::System::Action* Field_1_9; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Action*>* Field_1_5; // 0x50
	::System::Action* Field_1_11; // 0x58
	::MoleMole::InputLogicEventType Field_1_7; // 0x60
	::MoleMole::InputLogicEventType Field_1_6; // 0x64
	::Enum_3_E7A4A4735E163CEB Field_1_3; // 0x68

	::System::Void _ctor(::MoleMole::UIInputFieldEx* a1, ::MoleMole::MonoGamepadSelectable* a2, ::MoleMole::MonoGamepadModule* a3, ::MoleMole::InputLogicEventType a4, ::MoleMole::InputLogicEventType a5, ::System::Action* a6, ::System::Action* a7, ::System::Action* a8, ::System::Action* a9, ::System::Action* a10)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::MoleMole::MonoGamepadSelectable*, ::MoleMole::MonoGamepadModule*, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_0287A932E5CC7E66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_0287A932E5CC7E66_OFFSET))(this);
	}

	::System::Void Method_1_DF7A8DC1A1E1DC1E(::Enum_3_E7A4A4735E163CEB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E7A4A4735E163CEB))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_DF7A8DC1A1E1DC1E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_601400950C766661(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_601400950C766661_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCFDF34D93C9F44D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_BCFDF34D93C9F44D_OFFSET))(this, a1);
	}

	::Enum_3_E7A4A4735E163CEB Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_E7A4A4735E163CEB(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_0287A932E5CC7E66_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_0287A932E5CC7E66_1_OFFSET))(this);
	}

	::System::Void Method_1_24AE0B16C654D410(::Enum_3_E7A4A4735E163CEB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E7A4A4735E163CEB))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_24AE0B16C654D410_OFFSET))(this, a1);
	}

	::System::Void Method_1_0287A932E5CC7E66_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_0287A932E5CC7E66_2_OFFSET))(this);
	}

	::System::Void Method_1_862329920B8ADE9E(::Enum_3_E7A4A4735E163CEB a1, ::MoleMole::InputLogicEventType a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E7A4A4735E163CEB, ::MoleMole::InputLogicEventType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_862329920B8ADE9E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BC290F9827A1BD7_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};

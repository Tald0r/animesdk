#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5683D1532DCBF1DB.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_675;
class Class_2_9A16BB53176B1EDB;
namespace MoleMole { class UIInterKnowCoursePanelWidgetController; }

#define CLASS_1_8922DBE482CC1BA4_METHOD_1_1A4E0FFCF3F7E082_OFFSET UNITYSDK_OFFSET(0x7CCD870)
#define CLASS_1_8922DBE482CC1BA4_METHOD_1_209EFD130889B83A_OFFSET UNITYSDK_OFFSET(0x7CCDAA0)
#define CLASS_1_8922DBE482CC1BA4_METHOD_1_3BFDCE7EF223BEF1_OFFSET UNITYSDK_OFFSET(0x7CCDB50)
#define CLASS_1_8922DBE482CC1BA4__CTOR_OFFSET UNITYSDK_OFFSET(0x7CCD860)

inline static constexpr unsigned int Class_1_8922DBE482CC1BA4_TypeDefinitionIndex = 73040;

class Class_1_8922DBE482CC1BA4 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_675* Field_1_0; // 0x10
	::MoleMole::UIInterKnowCoursePanelWidgetController* Field_1_2; // 0x18
	::Enum_3_5683D1532DCBF1DB Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8922DBE482CC1BA4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1A4E0FFCF3F7E082(::Class_2_9A16BB53176B1EDB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9A16BB53176B1EDB*))((::PBYTE)hIl2Cpp + CLASS_1_8922DBE482CC1BA4_METHOD_1_1A4E0FFCF3F7E082_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_209EFD130889B83A(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_1_8922DBE482CC1BA4_METHOD_1_209EFD130889B83A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BFDCE7EF223BEF1(::Enum_3_5683D1532DCBF1DB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_5683D1532DCBF1DB))((::PBYTE)hIl2Cpp + CLASS_1_8922DBE482CC1BA4_METHOD_1_3BFDCE7EF223BEF1_OFFSET))(this, a1);
	}
};

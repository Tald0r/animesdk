#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISDKLoginWidgetController; }

#define CLASS_1_5FFC3AED380C8D79_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x7416300)
#define CLASS_1_5FFC3AED380C8D79__CTOR_OFFSET UNITYSDK_OFFSET(0x74162F0)

inline static constexpr unsigned int Class_1_5FFC3AED380C8D79_TypeDefinitionIndex = 47625;

class Class_1_5FFC3AED380C8D79 : public ::System::Object
{
public:
	::MoleMole::UISDKLoginWidgetController* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::UISDKLoginWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISDKLoginWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_5FFC3AED380C8D79__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FFC3AED380C8D79_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageSkinShow; }
namespace System { class Action; }

#define CLASS_1_E7333269829A5CD9_CLASS_1_AF56D46A0515A6EB_METHOD_1_B2CA44C15D334C4D_OFFSET UNITYSDK_OFFSET(0x737BD50)
#define CLASS_1_E7333269829A5CD9_CLASS_1_AF56D46A0515A6EB__CTOR_OFFSET UNITYSDK_OFFSET(0x737BD40)

inline static constexpr unsigned int Class_1_E7333269829A5CD9_Class_1_AF56D46A0515A6EB_TypeDefinitionIndex = 78418;

class Class_1_E7333269829A5CD9_Class_1_AF56D46A0515A6EB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7333269829A5CD9_CLASS_1_AF56D46A0515A6EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B2CA44C15D334C4D(::MoleMole::ConfigUIMainPageSkinShow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageSkinShow*))((::PBYTE)hIl2Cpp + CLASS_1_E7333269829A5CD9_CLASS_1_AF56D46A0515A6EB_METHOD_1_B2CA44C15D334C4D_OFFSET))(this, a1);
	}
};

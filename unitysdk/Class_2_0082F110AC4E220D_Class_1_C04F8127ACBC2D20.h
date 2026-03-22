#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NotificationBadge; }

#define CLASS_2_0082F110AC4E220D_CLASS_1_C04F8127ACBC2D20_METHOD_1_FB97750E3F15020A_OFFSET UNITYSDK_OFFSET(0xC559890)
#define CLASS_2_0082F110AC4E220D_CLASS_1_C04F8127ACBC2D20__CTOR_OFFSET UNITYSDK_OFFSET(0xC559880)

inline static constexpr unsigned int Class_2_0082F110AC4E220D_Class_1_C04F8127ACBC2D20_TypeDefinitionIndex = 50347;

class Class_2_0082F110AC4E220D_Class_1_C04F8127ACBC2D20 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0082F110AC4E220D_CLASS_1_C04F8127ACBC2D20__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FB97750E3F15020A(::MoleMole::NotificationBadge* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadge*))((::PBYTE)hIl2Cpp + CLASS_2_0082F110AC4E220D_CLASS_1_C04F8127ACBC2D20_METHOD_1_FB97750E3F15020A_OFFSET))(this, a1);
	}
};

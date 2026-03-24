#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D6D1B35AE0BED5AD;
namespace MoleMole { class UIBaseScenePageController; }

#define CLASS_1_7AD164144758E750_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xAE67B90)
#define CLASS_1_7AD164144758E750_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xAE67BC0)
#define CLASS_1_7AD164144758E750__CTOR_OFFSET UNITYSDK_OFFSET(0xAE67B80)

inline static constexpr unsigned int Class_1_7AD164144758E750_TypeDefinitionIndex = 40731;

class Class_1_7AD164144758E750 : public ::System::Object
{
public:
	::MoleMole::UIBaseScenePageController* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::UIBaseScenePageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseScenePageController*))((::PBYTE)hIl2Cpp + CLASS_1_7AD164144758E750__CTOR_OFFSET))(this, a1);
	}

	::Class_1_D6D1B35AE0BED5AD* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_D6D1B35AE0BED5AD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD164144758E750_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD164144758E750_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};

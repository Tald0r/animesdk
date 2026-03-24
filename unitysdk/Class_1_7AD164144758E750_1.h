#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseScenePageController; }

#define CLASS_1_7AD164144758E750_1_METHOD_1_CC3862151CCDFF4F_OFFSET UNITYSDK_OFFSET(0xC559F60)
#define CLASS_1_7AD164144758E750_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC559F50)

inline static constexpr unsigned int Class_1_7AD164144758E750_1_TypeDefinitionIndex = 63536;

class Class_1_7AD164144758E750_1 : public ::System::Object
{
public:
	::MoleMole::UIBaseScenePageController* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::UIBaseScenePageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseScenePageController*))((::PBYTE)hIl2Cpp + CLASS_1_7AD164144758E750_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CC3862151CCDFF4F(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7AD164144758E750_1_METHOD_1_CC3862151CCDFF4F_OFFSET))(this, a1);
	}
};

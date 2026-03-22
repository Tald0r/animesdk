#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define CLASS_4_F615DBC3DB6637C4_CLASS_1_34A3A713F6570560__CTOR_OFFSET UNITYSDK_OFFSET(0x7CF6F10)

inline static constexpr unsigned int Class_4_F615DBC3DB6637C4_Class_1_34A3A713F6570560_TypeDefinitionIndex = 59506;

class Class_4_F615DBC3DB6637C4_Class_1_34A3A713F6570560 : public ::System::Object
{
public:
	::FluffyUnderware::Curvy::CurvySpline* Field_1_0; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_4; // 0x18
	::MoleMole::EntityHandle Field_1_1; // 0x28
	::System::Single Field_1_2; // 0x38
	::System::Single Field_1_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F615DBC3DB6637C4_CLASS_1_34A3A713F6570560__CTOR_OFFSET))(this);
	}
};

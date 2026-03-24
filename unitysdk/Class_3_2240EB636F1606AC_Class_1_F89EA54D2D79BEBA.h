#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_2240EB636F1606AC_CLASS_1_F89EA54D2D79BEBA_METHOD_1_E7EC02BA9D2BBE6B_OFFSET UNITYSDK_OFFSET(0x62C0960)
#define CLASS_3_2240EB636F1606AC_CLASS_1_F89EA54D2D79BEBA__CTOR_OFFSET UNITYSDK_OFFSET(0x62C0950)

inline static constexpr unsigned int Class_3_2240EB636F1606AC_Class_1_F89EA54D2D79BEBA_TypeDefinitionIndex = 57029;

class Class_3_2240EB636F1606AC_Class_1_F89EA54D2D79BEBA : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_CLASS_1_F89EA54D2D79BEBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EC02BA9D2BBE6B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_CLASS_1_F89EA54D2D79BEBA_METHOD_1_E7EC02BA9D2BBE6B_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigHollowChessboardEntityBehavior; }
namespace System { class Action; }

#define CLASS_1_DABBB9C83801AADE_CLASS_1_7ACAE43A37BEC892_METHOD_1_EE53AF385161E53E_OFFSET UNITYSDK_OFFSET(0x8180110)
#define CLASS_1_DABBB9C83801AADE_CLASS_1_7ACAE43A37BEC892__CTOR_OFFSET UNITYSDK_OFFSET(0x8180100)

inline static constexpr unsigned int Class_1_DABBB9C83801AADE_Class_1_7ACAE43A37BEC892_TypeDefinitionIndex = 64765;

class Class_1_DABBB9C83801AADE_Class_1_7ACAE43A37BEC892 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_CLASS_1_7ACAE43A37BEC892__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EE53AF385161E53E(::MoleMole::ConfigHollowChessboardEntityBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigHollowChessboardEntityBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_CLASS_1_7ACAE43A37BEC892_METHOD_1_EE53AF385161E53E_OFFSET))(this, a1);
	}
};

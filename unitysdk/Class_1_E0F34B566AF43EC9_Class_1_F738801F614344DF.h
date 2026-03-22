#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardAtmosphere; }
namespace System { class Action; }

#define CLASS_1_E0F34B566AF43EC9_CLASS_1_F738801F614344DF_METHOD_1_C9B3E5AD02F331C0_OFFSET UNITYSDK_OFFSET(0x8E8F2E0)
#define CLASS_1_E0F34B566AF43EC9_CLASS_1_F738801F614344DF__CTOR_OFFSET UNITYSDK_OFFSET(0x8E8F2D0)

inline static constexpr unsigned int Class_1_E0F34B566AF43EC9_Class_1_F738801F614344DF_TypeDefinitionIndex = 66561;

class Class_1_E0F34B566AF43EC9_Class_1_F738801F614344DF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_CLASS_1_F738801F614344DF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C9B3E5AD02F331C0(::MoleMole::Config::ConfigHollowChessboardAtmosphere* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardAtmosphere*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_CLASS_1_F738801F614344DF_METHOD_1_C9B3E5AD02F331C0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowNpc; }
namespace System { class Action; }

#define CLASS_1_E21F764008BCC212_CLASS_1_8A86D946F9CF407C_METHOD_1_28C4877B57CEEDBE_OFFSET UNITYSDK_OFFSET(0x99737A0)
#define CLASS_1_E21F764008BCC212_CLASS_1_8A86D946F9CF407C__CTOR_OFFSET UNITYSDK_OFFSET(0x9973790)

inline static constexpr unsigned int Class_1_E21F764008BCC212_Class_1_8A86D946F9CF407C_TypeDefinitionIndex = 39352;

class Class_1_E21F764008BCC212_Class_1_8A86D946F9CF407C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_CLASS_1_8A86D946F9CF407C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_28C4877B57CEEDBE(::MoleMole::Config::ConfigHollowNpc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowNpc*))((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_CLASS_1_8A86D946F9CF407C_METHOD_1_28C4877B57CEEDBE_OFFSET))(this, a1);
	}
};

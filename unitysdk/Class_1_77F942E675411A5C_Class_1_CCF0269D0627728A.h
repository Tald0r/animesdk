#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowPlayer; }
namespace System { class Action; }

#define CLASS_1_77F942E675411A5C_CLASS_1_CCF0269D0627728A_METHOD_1_ECFAA5768782175E_OFFSET UNITYSDK_OFFSET(0x84C62D0)
#define CLASS_1_77F942E675411A5C_CLASS_1_CCF0269D0627728A__CTOR_OFFSET UNITYSDK_OFFSET(0x84C62C0)

inline static constexpr unsigned int Class_1_77F942E675411A5C_Class_1_CCF0269D0627728A_TypeDefinitionIndex = 63293;

class Class_1_77F942E675411A5C_Class_1_CCF0269D0627728A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_CLASS_1_CCF0269D0627728A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ECFAA5768782175E(::MoleMole::Config::ConfigHollowPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_77F942E675411A5C_CLASS_1_CCF0269D0627728A_METHOD_1_ECFAA5768782175E_OFFSET))(this, a1);
	}
};

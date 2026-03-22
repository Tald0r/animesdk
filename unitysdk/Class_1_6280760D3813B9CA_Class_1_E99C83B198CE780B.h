#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAvatar; }
namespace System { class Action; }

#define CLASS_1_6280760D3813B9CA_CLASS_1_E99C83B198CE780B_METHOD_1_A755FF3F0074E9C5_OFFSET UNITYSDK_OFFSET(0x6B9BD90)
#define CLASS_1_6280760D3813B9CA_CLASS_1_E99C83B198CE780B__CTOR_OFFSET UNITYSDK_OFFSET(0x6B9BD80)

inline static constexpr unsigned int Class_1_6280760D3813B9CA_Class_1_E99C83B198CE780B_TypeDefinitionIndex = 44353;

class Class_1_6280760D3813B9CA_Class_1_E99C83B198CE780B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6280760D3813B9CA_CLASS_1_E99C83B198CE780B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A755FF3F0074E9C5(::MoleMole::Config::ConfigUIAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_6280760D3813B9CA_CLASS_1_E99C83B198CE780B_METHOD_1_A755FF3F0074E9C5_OFFSET))(this, a1);
	}
};

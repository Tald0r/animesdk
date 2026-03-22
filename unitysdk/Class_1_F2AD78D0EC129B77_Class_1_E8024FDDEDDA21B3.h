#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFish; }
namespace System { class Action; }

#define CLASS_1_F2AD78D0EC129B77_CLASS_1_E8024FDDEDDA21B3_METHOD_1_136FAB61462F8DF0_OFFSET UNITYSDK_OFFSET(0x81AEAD0)
#define CLASS_1_F2AD78D0EC129B77_CLASS_1_E8024FDDEDDA21B3__CTOR_OFFSET UNITYSDK_OFFSET(0x81AEAC0)

inline static constexpr unsigned int Class_1_F2AD78D0EC129B77_Class_1_E8024FDDEDDA21B3_TypeDefinitionIndex = 73283;

class Class_1_F2AD78D0EC129B77_Class_1_E8024FDDEDDA21B3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2AD78D0EC129B77_CLASS_1_E8024FDDEDDA21B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_136FAB61462F8DF0(::MoleMole::ConfigUIFish* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFish*))((::PBYTE)hIl2Cpp + CLASS_1_F2AD78D0EC129B77_CLASS_1_E8024FDDEDDA21B3_METHOD_1_136FAB61462F8DF0_OFFSET))(this, a1);
	}
};

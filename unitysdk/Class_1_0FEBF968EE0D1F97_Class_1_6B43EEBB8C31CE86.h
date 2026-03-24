#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFishV2; }
namespace System { class Action; }

#define CLASS_1_0FEBF968EE0D1F97_CLASS_1_6B43EEBB8C31CE86_METHOD_1_65F61A3DE3C29540_OFFSET UNITYSDK_OFFSET(0xA0D8480)
#define CLASS_1_0FEBF968EE0D1F97_CLASS_1_6B43EEBB8C31CE86__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D8470)

inline static constexpr unsigned int Class_1_0FEBF968EE0D1F97_Class_1_6B43EEBB8C31CE86_TypeDefinitionIndex = 66688;

class Class_1_0FEBF968EE0D1F97_Class_1_6B43EEBB8C31CE86 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEBF968EE0D1F97_CLASS_1_6B43EEBB8C31CE86__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_65F61A3DE3C29540(::MoleMole::ConfigUIFishV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFishV2*))((::PBYTE)hIl2Cpp + CLASS_1_0FEBF968EE0D1F97_CLASS_1_6B43EEBB8C31CE86_METHOD_1_65F61A3DE3C29540_OFFSET))(this, a1);
	}
};

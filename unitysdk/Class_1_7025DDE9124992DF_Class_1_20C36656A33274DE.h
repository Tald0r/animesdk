#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLevelEndPerforms; }
namespace System { class Action; }

#define CLASS_1_7025DDE9124992DF_CLASS_1_20C36656A33274DE_METHOD_1_8B47745BDB82A5AD_OFFSET UNITYSDK_OFFSET(0x79EF7E0)
#define CLASS_1_7025DDE9124992DF_CLASS_1_20C36656A33274DE__CTOR_OFFSET UNITYSDK_OFFSET(0x79EF7D0)

inline static constexpr unsigned int Class_1_7025DDE9124992DF_Class_1_20C36656A33274DE_TypeDefinitionIndex = 44609;

class Class_1_7025DDE9124992DF_Class_1_20C36656A33274DE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_CLASS_1_20C36656A33274DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8B47745BDB82A5AD(::MoleMole::Config::ConfigLevelEndPerforms* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelEndPerforms*))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_CLASS_1_20C36656A33274DE_METHOD_1_8B47745BDB82A5AD_OFFSET))(this, a1);
	}
};

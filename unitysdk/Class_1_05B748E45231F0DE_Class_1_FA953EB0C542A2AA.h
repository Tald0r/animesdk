#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelAddOnConfig; }
namespace System { class Action; }

#define CLASS_1_05B748E45231F0DE_CLASS_1_FA953EB0C542A2AA_METHOD_1_C397600DF27D885C_OFFSET UNITYSDK_OFFSET(0x13CA76C0)
#define CLASS_1_05B748E45231F0DE_CLASS_1_FA953EB0C542A2AA__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA76B0)

inline static constexpr unsigned int Class_1_05B748E45231F0DE_Class_1_FA953EB0C542A2AA_TypeDefinitionIndex = 76698;

class Class_1_05B748E45231F0DE_Class_1_FA953EB0C542A2AA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B748E45231F0DE_CLASS_1_FA953EB0C542A2AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C397600DF27D885C(::MoleMole::Config::LevelAddOnConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelAddOnConfig*))((::PBYTE)hIl2Cpp + CLASS_1_05B748E45231F0DE_CLASS_1_FA953EB0C542A2AA_METHOD_1_C397600DF27D885C_OFFSET))(this, a1);
	}
};

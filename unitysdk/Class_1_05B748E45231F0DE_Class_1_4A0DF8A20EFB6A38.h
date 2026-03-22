#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Level { class LevelConfig; }
namespace System { class Action; }

#define CLASS_1_05B748E45231F0DE_CLASS_1_4A0DF8A20EFB6A38_METHOD_1_6AB406299186AF9E_OFFSET UNITYSDK_OFFSET(0x735B030)
#define CLASS_1_05B748E45231F0DE_CLASS_1_4A0DF8A20EFB6A38__CTOR_OFFSET UNITYSDK_OFFSET(0x735B020)

inline static constexpr unsigned int Class_1_05B748E45231F0DE_Class_1_4A0DF8A20EFB6A38_TypeDefinitionIndex = 49863;

class Class_1_05B748E45231F0DE_Class_1_4A0DF8A20EFB6A38 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B748E45231F0DE_CLASS_1_4A0DF8A20EFB6A38__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6AB406299186AF9E(::MoleMole::Level::LevelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Level::LevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_05B748E45231F0DE_CLASS_1_4A0DF8A20EFB6A38_METHOD_1_6AB406299186AF9E_OFFSET))(this, a1);
	}
};

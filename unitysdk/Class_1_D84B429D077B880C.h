#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D84B429D077B880C_METHOD_1_018C8AE90F200126_OFFSET UNITYSDK_OFFSET(0x92A4700)
#define CLASS_1_D84B429D077B880C_METHOD_1_5FA741B563037D77_OFFSET UNITYSDK_OFFSET(0x92A4760)

inline static constexpr unsigned int Class_1_D84B429D077B880C_TypeDefinitionIndex = 51098;

class Class_1_D84B429D077B880C : public ::System::Object
{
public:
	static ::MoleMole::Config::EffectLODType Method_1_018C8AE90F200126()
	{
		return ((::MoleMole::Config::EffectLODType(*)())((::PBYTE)hIl2Cpp + CLASS_1_D84B429D077B880C_METHOD_1_018C8AE90F200126_OFFSET))();
	}

	static ::System::String* Method_1_5FA741B563037D77(::MoleMole::Config::EffectLODType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + CLASS_1_D84B429D077B880C_METHOD_1_5FA741B563037D77_OFFSET))(a1);
	}
};

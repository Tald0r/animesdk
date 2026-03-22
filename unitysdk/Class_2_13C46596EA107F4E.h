#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A5C63A7A740BFBD0.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace Foundation::ViewObject { class ITraitSyncEntityCreator; }

#define CLASS_2_13C46596EA107F4E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB441B10)
#define CLASS_2_13C46596EA107F4E_METHOD_2_7793E33860187454_OFFSET UNITYSDK_OFFSET(0xB441990)
#define CLASS_2_13C46596EA107F4E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB441BE0)
#define CLASS_2_13C46596EA107F4E__CTOR_OFFSET UNITYSDK_OFFSET(0xB441BD0)

inline static constexpr unsigned int Class_2_13C46596EA107F4E_TypeDefinitionIndex = 73784;

class Class_2_13C46596EA107F4E : public ::Class_1_A5C63A7A740BFBD0
{
public:
	::Foundation::ViewObject::ITraitSyncEntityCreator* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13C46596EA107F4E__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_7793E33860187454()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13C46596EA107F4E_METHOD_2_7793E33860187454_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13C46596EA107F4E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13C46596EA107F4E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

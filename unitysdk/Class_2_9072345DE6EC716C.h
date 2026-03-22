#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"

#define CLASS_2_9072345DE6EC716C_METHOD_2_8F932EB737312F8A_OFFSET UNITYSDK_OFFSET(0x19C1EC80)
#define CLASS_2_9072345DE6EC716C_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x19C1EB70)
#define CLASS_2_9072345DE6EC716C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19C1EC20)
#define CLASS_2_9072345DE6EC716C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C1EAF0)
#define CLASS_2_9072345DE6EC716C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1EB60)

inline static constexpr unsigned int Class_2_9072345DE6EC716C_TypeDefinitionIndex = 45129;

class Class_2_9072345DE6EC716C : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x7F; // 0x0
	::System::Boolean Field_2_1; // 0x20
	::MoleMole::Config::InlevelCameraState Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9072345DE6EC716C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9072345DE6EC716C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9072345DE6EC716C_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9072345DE6EC716C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8F932EB737312F8A(::System::UInt32 a1, ::MoleMole::Config::InlevelCameraState a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::InlevelCameraState, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9072345DE6EC716C_METHOD_2_8F932EB737312F8A_OFFSET))(this, a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace System { class String; }

#define CLASS_2_B9924A1E70572906_METHOD_2_6BBE260482EE42AD_OFFSET UNITYSDK_OFFSET(0x8DADE30)
#define CLASS_2_B9924A1E70572906_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x8DADD80)
#define CLASS_2_B9924A1E70572906_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8DADEF0)
#define CLASS_2_B9924A1E70572906__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DADD00)
#define CLASS_2_B9924A1E70572906__CTOR_OFFSET UNITYSDK_OFFSET(0x8DADD70)

inline static constexpr unsigned int Class_2_B9924A1E70572906_TypeDefinitionIndex = 68947;

class Class_2_B9924A1E70572906 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0x99; // 0x0
	::System::String* Field_2_1; // 0x20
	::System::Double Field_2_4; // 0x28
	::MoleMole::Config::BaseProperty Field_2_0; // 0x30
	::MoleMole::Config::PropertyModifyFunction Field_2_2; // 0x34
	::System::Single Field_2_3; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B9924A1E70572906__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9924A1E70572906__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9924A1E70572906_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_6BBE260482EE42AD(::MoleMole::Config::BaseProperty a1, ::System::String* a2, ::MoleMole::Config::PropertyModifyFunction a3, ::System::Single a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_B9924A1E70572906_METHOD_2_6BBE260482EE42AD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9924A1E70572906_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

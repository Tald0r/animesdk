#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

#define CLASS_2_C66010578763963F_METHOD_2_0FB160AD97996BF0_1_OFFSET UNITYSDK_OFFSET(0xE13DBD0)
#define CLASS_2_C66010578763963F_METHOD_2_0FB160AD97996BF0_OFFSET UNITYSDK_OFFSET(0xE13DB20)
#define CLASS_2_C66010578763963F_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xE13DA10)
#define CLASS_2_C66010578763963F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE13DAC0)
#define CLASS_2_C66010578763963F__CCTOR_OFFSET UNITYSDK_OFFSET(0xE13D990)
#define CLASS_2_C66010578763963F__CTOR_OFFSET UNITYSDK_OFFSET(0xE13DA00)

inline static constexpr unsigned int Class_2_C66010578763963F_TypeDefinitionIndex = 75042;

class Class_2_C66010578763963F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0xC4; // 0x0
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24
	::System::UInt32 Field_2_3; // 0x28
	::MoleMole::Config::PropertyModifyFunction Field_2_0; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0FB160AD97996BF0(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F_METHOD_2_0FB160AD97996BF0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0FB160AD97996BF0_1(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F_METHOD_2_0FB160AD97996BF0_1_OFFSET))(this, a1, a2, a3, a4);
	}
};

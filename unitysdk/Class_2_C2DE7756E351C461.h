#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"

namespace System { class String; }

#define CLASS_2_C2DE7756E351C461_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10B8AC90)
#define CLASS_2_C2DE7756E351C461_METHOD_2_1C7D16CFD5E3856D_OFFSET UNITYSDK_OFFSET(0x10B8ABC0)
#define CLASS_2_C2DE7756E351C461_METHOD_2_1F4DE031F3F06AC8_OFFSET UNITYSDK_OFFSET(0x10B8AB10)
#define CLASS_2_C2DE7756E351C461_METHOD_2_363ACD6E51339DEA_OFFSET UNITYSDK_OFFSET(0x10B8ABF0)
#define CLASS_2_C2DE7756E351C461_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x10B8AC80)
#define CLASS_2_C2DE7756E351C461_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x10B8ABD0)
#define CLASS_2_C2DE7756E351C461_METHOD_2_76C4FA0157879317_OFFSET UNITYSDK_OFFSET(0x10B8AC00)
#define CLASS_2_C2DE7756E351C461_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x10B8AA60)
#define CLASS_2_C2DE7756E351C461_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B8AC10)
#define CLASS_2_C2DE7756E351C461_METHOD_2_E71761697FA87C6D_OFFSET UNITYSDK_OFFSET(0x10B8AB20)
#define CLASS_2_C2DE7756E351C461_METHOD_2_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x10B8AC70)
#define CLASS_2_C2DE7756E351C461_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x10B8ABE0)
#define CLASS_2_C2DE7756E351C461_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10B8A940)
#define CLASS_2_C2DE7756E351C461__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B8A9E0)
#define CLASS_2_C2DE7756E351C461__CTOR_OFFSET UNITYSDK_OFFSET(0x10B8AA50)

inline static constexpr unsigned int Class_2_C2DE7756E351C461_TypeDefinitionIndex = 66898;

class Class_2_C2DE7756E351C461 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0x3B; // 0x0
	::System::Single Field_2_0; // 0x20
	::MoleMole::Config::DamageElementType Field_2_2; // 0x24
	::System::Single Field_2_1; // 0x28
	::MoleMole::Config::EVariantElement Field_2_3; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_1F4DE031F3F06AC8(::MoleMole::Config::EVariantElement a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_1F4DE031F3F06AC8_OFFSET))(this, a1);
	}

	::System::Void Method_2_E71761697FA87C6D(::System::Single a1, ::System::Single a2, ::MoleMole::Config::DamageElementType a3, ::MoleMole::Config::EVariantElement a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_E71761697FA87C6D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1C7D16CFD5E3856D(::MoleMole::Config::DamageElementType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_1C7D16CFD5E3856D_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::MoleMole::Config::DamageElementType Method_2_363ACD6E51339DEA()
	{
		return ((::MoleMole::Config::DamageElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_363ACD6E51339DEA_OFFSET))(this);
	}

	::MoleMole::Config::EVariantElement Method_2_76C4FA0157879317()
	{
		return ((::MoleMole::Config::EVariantElement(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_76C4FA0157879317_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DE7756E351C461_METHOD_2_128774387667156B_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

#define CLASS_2_3D56061BB4B0BC0F_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x6D14B30)
#define CLASS_2_3D56061BB4B0BC0F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6D14D20)
#define CLASS_2_3D56061BB4B0BC0F_METHOD_2_E61411B843F1EB71_1_OFFSET UNITYSDK_OFFSET(0x6D14C80)
#define CLASS_2_3D56061BB4B0BC0F_METHOD_2_E61411B843F1EB71_OFFSET UNITYSDK_OFFSET(0x6D14BE0)
#define CLASS_2_3D56061BB4B0BC0F__CCTOR_OFFSET UNITYSDK_OFFSET(0x6D14AB0)
#define CLASS_2_3D56061BB4B0BC0F__CTOR_OFFSET UNITYSDK_OFFSET(0x6D14B20)

inline static constexpr unsigned int Class_2_3D56061BB4B0BC0F_TypeDefinitionIndex = 49257;

class Class_2_3D56061BB4B0BC0F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xC3; // 0x0
	::System::Single Field_2_2; // 0x20
	::System::Single Field_2_1; // 0x24
	::MoleMole::Config::PropertyModifyFunction Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3D56061BB4B0BC0F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D56061BB4B0BC0F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D56061BB4B0BC0F_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_E61411B843F1EB71(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D56061BB4B0BC0F_METHOD_2_E61411B843F1EB71_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E61411B843F1EB71_1(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D56061BB4B0BC0F_METHOD_2_E61411B843F1EB71_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D56061BB4B0BC0F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

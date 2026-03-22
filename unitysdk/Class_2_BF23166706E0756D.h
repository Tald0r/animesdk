#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_8431ED11DDFEB049.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/Struct_2_E555EF9B1EABB0B4.h"

#define CLASS_2_BF23166706E0756D_METHOD_2_AA94FB72678389C0_OFFSET UNITYSDK_OFFSET(0x6C10D10)
#define CLASS_2_BF23166706E0756D_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x6C10C60)
#define CLASS_2_BF23166706E0756D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6C10DA0)
#define CLASS_2_BF23166706E0756D__CCTOR_OFFSET UNITYSDK_OFFSET(0x6C10BE0)
#define CLASS_2_BF23166706E0756D__CTOR_OFFSET UNITYSDK_OFFSET(0x6C10C50)

inline static constexpr unsigned int Class_2_BF23166706E0756D_TypeDefinitionIndex = 48697;

class Class_2_BF23166706E0756D : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x9B; // 0x0
	::System::Single Field_2_2; // 0x20
	::System::Single Field_2_1; // 0x24
	::Enum_3_8431ED11DDFEB049 Field_2_4; // 0x28
	::Struct_2_E555EF9B1EABB0B4 Field_2_5; // 0x2C
	::System::Boolean Field_2_3; // 0x44
	::MoleMole::Config::PropertyModifyFunction Field_2_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_AA94FB72678389C0(::Struct_2_E555EF9B1EABB0B4 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E555EF9B1EABB0B4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D_METHOD_2_AA94FB72678389C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF23166706E0756D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

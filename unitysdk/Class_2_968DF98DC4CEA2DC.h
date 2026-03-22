#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B7970D0E94833DA.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/BaseMove_AIMoveTargetState.h"

class Class_3_B19369CC4AB45FA4;
class Class_3_BD1C1745FBC83F51;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace System { class String; }

#define CLASS_2_968DF98DC4CEA2DC_METHOD_2_0E4566438CAEFDDE_OFFSET UNITYSDK_OFFSET(0x16C1E620)
#define CLASS_2_968DF98DC4CEA2DC_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x16C1DF50)
#define CLASS_2_968DF98DC4CEA2DC_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16C1E5C0)
#define CLASS_2_968DF98DC4CEA2DC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16C1DEE0)
#define CLASS_2_968DF98DC4CEA2DC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1E5A0)

inline static constexpr unsigned int Class_2_968DF98DC4CEA2DC_TypeDefinitionIndex = 64956;

class Class_2_968DF98DC4CEA2DC : public ::Class_1_7B7970D0E94833DA
{
public:
	::Class_3_F33F9DC5F4112336* Field_2_7; // 0x28
	::System::String* Field_2_1; // 0x30
	::Class_3_BD1C1745FBC83F51* Field_2_5; // 0x38
	::Class_3_B19369CC4AB45FA4* Field_2_6; // 0x40
	::Class_3_F35B080B137ECC46* Field_2_8; // 0x48
	::System::Single Field_2_4; // 0x50
	::System::Single Field_2_3; // 0x54
	::System::Single Field_2_2; // 0x58
	::System::Single Field_2_9; // 0x5C
	::MoleMole::AIMoveTargetType Field_2_0; // 0x60
	::System::Single Field_2_11; // 0x64
	::MoleMole::BaseMove_AIMoveTargetState Field_2_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_968DF98DC4CEA2DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_968DF98DC4CEA2DC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_968DF98DC4CEA2DC_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_968DF98DC4CEA2DC_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_0E4566438CAEFDDE(::Class_3_BD1C1745FBC83F51* a1, ::Class_3_B19369CC4AB45FA4* a2, ::Class_3_F33F9DC5F4112336* a3, ::Class_3_F35B080B137ECC46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BD1C1745FBC83F51*, ::Class_3_B19369CC4AB45FA4*, ::Class_3_F33F9DC5F4112336*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_2_968DF98DC4CEA2DC_METHOD_2_0E4566438CAEFDDE_OFFSET))(this, a1, a2, a3, a4);
	}
};

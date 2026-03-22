#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B7970D0E94833DA.h"

class Class_3_B19369CC4AB45FA4;
class Class_3_BD1C1745FBC83F51;
class Class_3_F35B080B137ECC46;

#define CLASS_2_24B31638312672D4_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x962EB20)
#define CLASS_2_24B31638312672D4_METHOD_2_64C97D0209200DBF_OFFSET UNITYSDK_OFFSET(0x962F0A0)
#define CLASS_2_24B31638312672D4__CTOR_OFFSET UNITYSDK_OFFSET(0x962F090)

inline static constexpr unsigned int Class_2_24B31638312672D4_TypeDefinitionIndex = 61141;

class Class_2_24B31638312672D4 : public ::Class_1_7B7970D0E94833DA
{
public:
	::Class_3_B19369CC4AB45FA4* Field_2_0; // 0x28
	::Class_3_F35B080B137ECC46* Field_2_1; // 0x30
	::Class_3_BD1C1745FBC83F51* Field_2_2; // 0x38
	::System::Single Field_2_4; // 0x40
	::System::Single Field_2_3; // 0x44
	::System::Single Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24B31638312672D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24B31638312672D4_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_2_64C97D0209200DBF(::Class_3_B19369CC4AB45FA4* a1, ::Class_3_F35B080B137ECC46* a2, ::Class_3_BD1C1745FBC83F51* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B19369CC4AB45FA4*, ::Class_3_F35B080B137ECC46*, ::Class_3_BD1C1745FBC83F51*))((::PBYTE)hIl2Cpp + CLASS_2_24B31638312672D4_METHOD_2_64C97D0209200DBF_OFFSET))(this, a1, a2, a3);
	}
};

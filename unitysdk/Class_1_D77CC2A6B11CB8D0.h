#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D77CC2A6B11CB8D0_Struct_2_E81A211B6662113C.h"
#include "unitysdk/System/Object.h"

class Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E;
class Class_3_C4DB8D898CBC2756_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D77CC2A6B11CB8D0_METHOD_1_3152123B76C68018_OFFSET UNITYSDK_OFFSET(0x16C2CC00)
#define CLASS_1_D77CC2A6B11CB8D0_METHOD_1_35DD8B68E2693FC7_OFFSET UNITYSDK_OFFSET(0x16C2C5E0)
#define CLASS_1_D77CC2A6B11CB8D0_METHOD_1_7210A48882650316_OFFSET UNITYSDK_OFFSET(0x16C2C8C0)
#define CLASS_1_D77CC2A6B11CB8D0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2C4D0)

inline static constexpr unsigned int Class_1_D77CC2A6B11CB8D0_TypeDefinitionIndex = 36659;

class Class_1_D77CC2A6B11CB8D0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D77CC2A6B11CB8D0_Struct_2_E81A211B6662113C>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D77CC2A6B11CB8D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_35DD8B68E2693FC7(::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E*))((::PBYTE)hIl2Cpp + CLASS_1_D77CC2A6B11CB8D0_METHOD_1_35DD8B68E2693FC7_OFFSET))(this, a1);
	}

	::Class_3_C4DB8D898CBC2756_2* Method_1_7210A48882650316()
	{
		return ((::Class_3_C4DB8D898CBC2756_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D77CC2A6B11CB8D0_METHOD_1_7210A48882650316_OFFSET))(this);
	}

	::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E* Method_1_3152123B76C68018()
	{
		return ((::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D77CC2A6B11CB8D0_METHOD_1_3152123B76C68018_OFFSET))(this);
	}
};

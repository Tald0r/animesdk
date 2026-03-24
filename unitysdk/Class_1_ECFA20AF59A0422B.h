#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13256E311AF13FFD.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_184;

#define CLASS_1_ECFA20AF59A0422B_METHOD_1_961EE4A499B85B55_OFFSET UNITYSDK_OFFSET(0x8785B70)
#define CLASS_1_ECFA20AF59A0422B_METHOD_1_B1DC6A464C83AA0F_OFFSET UNITYSDK_OFFSET(0x8785A70)
#define CLASS_1_ECFA20AF59A0422B_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8785A60)
#define CLASS_1_ECFA20AF59A0422B__CTOR_OFFSET UNITYSDK_OFFSET(0x8786020)

inline static constexpr unsigned int Class_1_ECFA20AF59A0422B_TypeDefinitionIndex = 69234;

class Class_1_ECFA20AF59A0422B : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECFA20AF59A0422B__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECFA20AF59A0422B_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::Enum_3_13256E311AF13FFD Method_1_B1DC6A464C83AA0F(::System::Int32 a1, ::Class_0_16E4307DCC419505_184* a2)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_184*))((::PBYTE)hIl2Cpp + CLASS_1_ECFA20AF59A0422B_METHOD_1_B1DC6A464C83AA0F_OFFSET))(this, a1, a2);
	}

	::Enum_3_13256E311AF13FFD Method_1_961EE4A499B85B55(::System::Int32 a1, ::Class_0_16E4307DCC419505_184* a2)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_184*))((::PBYTE)hIl2Cpp + CLASS_1_ECFA20AF59A0422B_METHOD_1_961EE4A499B85B55_OFFSET))(this, a1, a2);
	}
};

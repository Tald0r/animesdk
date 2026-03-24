#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

#define CLASS_2_4B0D186A1228FA4E_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x750CA70)
#define CLASS_2_4B0D186A1228FA4E_1_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x750CAE0)
#define CLASS_2_4B0D186A1228FA4E_1_ONSTART_OFFSET UNITYSDK_OFFSET(0x750CA10)
#define CLASS_2_4B0D186A1228FA4E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x750CAD0)

inline static constexpr unsigned int Class_2_4B0D186A1228FA4E_1_TypeDefinitionIndex = 41218;

class Class_2_4B0D186A1228FA4E_1 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E_1__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E_1_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B0D186A1228FA4E_1_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}
};

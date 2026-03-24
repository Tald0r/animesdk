#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D46C5D064952E16_3.h"

class Class_2_1B1C05BC0A38A2D5_4;
namespace System { class String; }

#define CLASS_2_00F9F9FBFFCA5B51_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xAC119E0)
#define CLASS_2_00F9F9FBFFCA5B51_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xAC11920)
#define CLASS_2_00F9F9FBFFCA5B51__CTOR_OFFSET UNITYSDK_OFFSET(0xAC11910)

inline static constexpr unsigned int Class_2_00F9F9FBFFCA5B51_TypeDefinitionIndex = 48541;

class Class_2_00F9F9FBFFCA5B51 : public ::Class_1_3D46C5D064952E16_3
{
public:
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor(::Class_2_1B1C05BC0A38A2D5_4* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1B1C05BC0A38A2D5_4*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_00F9F9FBFFCA5B51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00F9F9FBFFCA5B51_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00F9F9FBFFCA5B51_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}
};

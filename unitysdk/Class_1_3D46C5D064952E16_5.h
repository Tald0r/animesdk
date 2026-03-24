#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_2_208CC9941471731A_589;

#define CLASS_1_3D46C5D064952E16_5_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0xA0688F0)
#define CLASS_1_3D46C5D064952E16_5__CTOR_OFFSET UNITYSDK_OFFSET(0xA0688E0)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_5_TypeDefinitionIndex = 55023;

class Class_1_3D46C5D064952E16_5 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_589* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_208CC9941471731A_589* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_589*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_5__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_355* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_5_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}
};

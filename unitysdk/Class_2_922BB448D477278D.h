#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_60.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_366.h"

class Class_0_16E4307DCC419505_13;
class Class_2_208CC9941471731A_240;

#define CLASS_2_922BB448D477278D_METHOD_2_4FCFFED2FCA12F31_OFFSET UNITYSDK_OFFSET(0x12292E60)
#define CLASS_2_922BB448D477278D__CTOR_OFFSET UNITYSDK_OFFSET(0x12292E50)

inline static constexpr unsigned int Class_2_922BB448D477278D_TypeDefinitionIndex = 13309;

class Class_2_922BB448D477278D : public ::Class_1_D9FAA3DCCFE14DB8_60
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_240*>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_366 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_366, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_922BB448D477278D__CTOR_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_240*>* Method_2_4FCFFED2FCA12F31()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_240*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_922BB448D477278D_METHOD_2_4FCFFED2FCA12F31_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_28.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_384.h"

class Class_0_16E4307DCC419505_13;
class Class_2_208CC9941471731A_53;

#define CLASS_2_C6AE2687F8086DEF_METHOD_2_DD5C14072773BB73_OFFSET UNITYSDK_OFFSET(0x138803F0)
#define CLASS_2_C6AE2687F8086DEF__CTOR_OFFSET UNITYSDK_OFFSET(0x138803E0)

inline static constexpr unsigned int Class_2_C6AE2687F8086DEF_TypeDefinitionIndex = 11551;

class Class_2_C6AE2687F8086DEF : public ::Class_1_D9FAA3DCCFE14DB8_28
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_53*>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_384 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_384, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_C6AE2687F8086DEF__CTOR_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_53*>* Method_2_DD5C14072773BB73()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_53*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6AE2687F8086DEF_METHOD_2_DD5C14072773BB73_OFFSET))(this);
	}
};

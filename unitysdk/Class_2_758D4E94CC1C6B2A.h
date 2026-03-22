#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_256.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_620.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_758D4E94CC1C6B2A_METHOD_2_479ECF74E102EE11_OFFSET UNITYSDK_OFFSET(0x16898190)
#define CLASS_2_758D4E94CC1C6B2A_METHOD_2_5FD4D43340A3D443_OFFSET UNITYSDK_OFFSET(0x168973E0)
#define CLASS_2_758D4E94CC1C6B2A__CTOR_OFFSET UNITYSDK_OFFSET(0x16897340)

inline static constexpr unsigned int Class_2_758D4E94CC1C6B2A_TypeDefinitionIndex = 14593;

class Class_2_758D4E94CC1C6B2A : public ::Class_1_5DA2E7556103D5A3_256
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_2_0; // 0xF0

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_620 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_620, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_758D4E94CC1C6B2A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_5FD4D43340A3D443(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_758D4E94CC1C6B2A_METHOD_2_5FD4D43340A3D443_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_479ECF74E102EE11(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_758D4E94CC1C6B2A_METHOD_2_479ECF74E102EE11_OFFSET))(this, a1);
	}
};

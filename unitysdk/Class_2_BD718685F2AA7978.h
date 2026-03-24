#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_15.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_84.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_BD718685F2AA7978_METHOD_2_2CAAA58EB429FD63_OFFSET UNITYSDK_OFFSET(0x1705E750)
#define CLASS_2_BD718685F2AA7978__CTOR_OFFSET UNITYSDK_OFFSET(0x1705E620)

inline static constexpr unsigned int Class_2_BD718685F2AA7978_TypeDefinitionIndex = 10775;

class Class_2_BD718685F2AA7978 : public ::Class_1_5DA2E7556103D5A3_15
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x80
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x88

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_84 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_84, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_BD718685F2AA7978__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_2CAAA58EB429FD63()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD718685F2AA7978_METHOD_2_2CAAA58EB429FD63_OFFSET))(this);
	}
};

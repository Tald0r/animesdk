#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4EBAA9372E57A380_Class_1_04A718CFB2B0DB18_1;
class Class_1_FF36F4CD104E8D70;
class Class_2_208CC9941471731A_520;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4EBAA9372E57A380_METHOD_1_BDCF5E8865BEDF6E_OFFSET UNITYSDK_OFFSET(0x169AFCF0)
#define CLASS_1_4EBAA9372E57A380_METHOD_1_CF0EF72A03B510AB_OFFSET UNITYSDK_OFFSET(0x169AFDE0)
#define CLASS_1_4EBAA9372E57A380_METHOD_1_DBAFB3822F104C31_OFFSET UNITYSDK_OFFSET(0x169B00D0)
#define CLASS_1_4EBAA9372E57A380__CTOR_OFFSET UNITYSDK_OFFSET(0x169AFC60)

inline static constexpr unsigned int Class_1_4EBAA9372E57A380_TypeDefinitionIndex = 12302;

class Class_1_4EBAA9372E57A380 : public ::System::Object
{
public:
	::Class_1_FF36F4CD104E8D70* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_4EBAA9372E57A380_Class_1_04A718CFB2B0DB18_1*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_520* Method_1_BDCF5E8865BEDF6E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_520*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_BDCF5E8865BEDF6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CF0EF72A03B510AB(::Class_1_FF36F4CD104E8D70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF36F4CD104E8D70*))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_CF0EF72A03B510AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBAFB3822F104C31(::Class_1_FF36F4CD104E8D70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF36F4CD104E8D70*))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_DBAFB3822F104C31_OFFSET))(this, a1);
	}
};

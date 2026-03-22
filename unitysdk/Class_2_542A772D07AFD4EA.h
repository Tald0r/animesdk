#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_94.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_318.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_542A772D07AFD4EA_METHOD_2_1AF176CFC417D7E6_OFFSET UNITYSDK_OFFSET(0xB7B4560)
#define CLASS_2_542A772D07AFD4EA_METHOD_2_423F2C2D16F7EB1D_OFFSET UNITYSDK_OFFSET(0xB7B4710)
#define CLASS_2_542A772D07AFD4EA_METHOD_2_57F17F1D6A27CB64_OFFSET UNITYSDK_OFFSET(0xB7B4AD0)
#define CLASS_2_542A772D07AFD4EA_METHOD_2_6845D0BCAAB9999A_OFFSET UNITYSDK_OFFSET(0xB7B44A0)
#define CLASS_2_542A772D07AFD4EA_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0xB7B4650)
#define CLASS_2_542A772D07AFD4EA__CTOR_OFFSET UNITYSDK_OFFSET(0xB7B43A0)

inline static constexpr unsigned int Class_2_542A772D07AFD4EA_TypeDefinitionIndex = 67603;

class Class_2_542A772D07AFD4EA : public ::Class_1_5DA2E7556103D5A3_94
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_1; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_0; // 0xF8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_318 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_318, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_542A772D07AFD4EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6845D0BCAAB9999A(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_542A772D07AFD4EA_METHOD_2_6845D0BCAAB9999A_OFFSET))(this, a1);
	}

	::System::Single Method_2_1AF176CFC417D7E6(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_542A772D07AFD4EA_METHOD_2_1AF176CFC417D7E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_542A772D07AFD4EA_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_423F2C2D16F7EB1D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_542A772D07AFD4EA_METHOD_2_423F2C2D16F7EB1D_OFFSET))(this, a1);
	}

	::System::String* Method_2_57F17F1D6A27CB64(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_542A772D07AFD4EA_METHOD_2_57F17F1D6A27CB64_OFFSET))(this, a1);
	}
};

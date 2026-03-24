#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4EBAA9372E57A380_Class_1_04A718CFB2B0DB18;
class Class_1_AF5416B233C5809C;
class Class_2_208CC9941471731A_70;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4EBAA9372E57A380_METHOD_1_BDCF5E8865BEDF6E_OFFSET UNITYSDK_OFFSET(0x13D8E500)
#define CLASS_1_4EBAA9372E57A380_METHOD_1_CF0EF72A03B510AB_OFFSET UNITYSDK_OFFSET(0x13D8E600)
#define CLASS_1_4EBAA9372E57A380_METHOD_1_DBAFB3822F104C31_OFFSET UNITYSDK_OFFSET(0x13D8E5F0)
#define CLASS_1_4EBAA9372E57A380__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8E470)

inline static constexpr unsigned int Class_1_4EBAA9372E57A380_TypeDefinitionIndex = 10003;

class Class_1_4EBAA9372E57A380 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_4EBAA9372E57A380_Class_1_04A718CFB2B0DB18*>* Field_1_1; // 0x10
	::Class_1_AF5416B233C5809C* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_70* Method_1_BDCF5E8865BEDF6E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_70*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_BDCF5E8865BEDF6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DBAFB3822F104C31(::Class_1_AF5416B233C5809C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF5416B233C5809C*))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_DBAFB3822F104C31_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF0EF72A03B510AB(::Class_1_AF5416B233C5809C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF5416B233C5809C*))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_CF0EF72A03B510AB_OFFSET))(this, a1);
	}
};

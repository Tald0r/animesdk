#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B306F6B59B665F4B.h"
#include "unitysdk/System/Object.h"

class Class_2_C1491116B0527AAB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_C1491116B0527AAB_CLASS_1_A3AC9BF3E40BEBB0_METHOD_1_36D2F482597D0AB4_1_OFFSET UNITYSDK_OFFSET(0x627BC60)
#define CLASS_2_C1491116B0527AAB_CLASS_1_A3AC9BF3E40BEBB0_METHOD_1_36D2F482597D0AB4_OFFSET UNITYSDK_OFFSET(0x627BBA0)
#define CLASS_2_C1491116B0527AAB_CLASS_1_A3AC9BF3E40BEBB0__CTOR_OFFSET UNITYSDK_OFFSET(0x627BB90)

inline static constexpr unsigned int Class_2_C1491116B0527AAB_Class_1_A3AC9BF3E40BEBB0_TypeDefinitionIndex = 78504;

class Class_2_C1491116B0527AAB_Class_1_A3AC9BF3E40BEBB0 : public ::System::Object
{
public:
	::Struct_2_B306F6B59B665F4B Field_1_0; // 0x10
	::Class_2_C1491116B0527AAB* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_CLASS_1_A3AC9BF3E40BEBB0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_36D2F482597D0AB4(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_CLASS_1_A3AC9BF3E40BEBB0_METHOD_1_36D2F482597D0AB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36D2F482597D0AB4_1(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_CLASS_1_A3AC9BF3E40BEBB0_METHOD_1_36D2F482597D0AB4_1_OFFSET))(this, a1, a2);
	}
};

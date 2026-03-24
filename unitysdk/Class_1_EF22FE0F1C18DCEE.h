#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9C9516EC1DA3BB28.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
class Class_1_70BD21BFA8AB64FC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF22FE0F1C18DCEE_METHOD_1_5602D2B72058234F_OFFSET UNITYSDK_OFFSET(0x669FC00)
#define CLASS_1_EF22FE0F1C18DCEE_METHOD_1_7F52C63BAD7AD59D_OFFSET UNITYSDK_OFFSET(0x66A02F0)
#define CLASS_1_EF22FE0F1C18DCEE_METHOD_1_B4C568BF1C1AA0A5_OFFSET UNITYSDK_OFFSET(0x66A0050)
#define CLASS_1_EF22FE0F1C18DCEE__CTOR_OFFSET UNITYSDK_OFFSET(0x669FAA0)

inline static constexpr unsigned int Class_1_EF22FE0F1C18DCEE_TypeDefinitionIndex = 64064;

class Class_1_EF22FE0F1C18DCEE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_9C9516EC1DA3BB28, ::Class_1_70BD21BFA8AB64FC*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF22FE0F1C18DCEE__CTOR_OFFSET))(this);
	}

	::Class_1_70BD21BFA8AB64FC* Method_1_5602D2B72058234F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_175*>* a1)
	{
		return ((::Class_1_70BD21BFA8AB64FC*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_175*>*))((::PBYTE)hIl2Cpp + CLASS_1_EF22FE0F1C18DCEE_METHOD_1_5602D2B72058234F_OFFSET))(this, a1);
	}

	::Class_1_70BD21BFA8AB64FC* Method_1_B4C568BF1C1AA0A5(::Struct_2_9C9516EC1DA3BB28& a1)
	{
		return ((::Class_1_70BD21BFA8AB64FC*(*)(::PVOID, ::Struct_2_9C9516EC1DA3BB28&))((::PBYTE)hIl2Cpp + CLASS_1_EF22FE0F1C18DCEE_METHOD_1_B4C568BF1C1AA0A5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7F52C63BAD7AD59D(::Struct_2_9C9516EC1DA3BB28& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9C9516EC1DA3BB28&))((::PBYTE)hIl2Cpp + CLASS_1_EF22FE0F1C18DCEE_METHOD_1_7F52C63BAD7AD59D_OFFSET))(this, a1);
	}
};

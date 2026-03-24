#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_145;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_3FE0B716C88DCD9E_METHOD_1_57D21531A2DC98EE_OFFSET UNITYSDK_OFFSET(0x8BDC0A0)
#define CLASS_1_3FE0B716C88DCD9E_METHOD_1_66DC1EB5F4259A88_OFFSET UNITYSDK_OFFSET(0x8BDC090)
#define CLASS_1_3FE0B716C88DCD9E__CTOR_OFFSET UNITYSDK_OFFSET(0x8BDC000)

inline static constexpr unsigned int Class_1_3FE0B716C88DCD9E_TypeDefinitionIndex = 65836;

class Class_1_3FE0B716C88DCD9E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_145*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FE0B716C88DCD9E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_145*>* Method_1_66DC1EB5F4259A88()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_145*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FE0B716C88DCD9E_METHOD_1_66DC1EB5F4259A88_OFFSET))(this);
	}

	::System::Void Method_1_57D21531A2DC98EE(::Class_0_16E4307DCC419505_145* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_145*))((::PBYTE)hIl2Cpp + CLASS_1_3FE0B716C88DCD9E_METHOD_1_57D21531A2DC98EE_OFFSET))(this, a1);
	}
};

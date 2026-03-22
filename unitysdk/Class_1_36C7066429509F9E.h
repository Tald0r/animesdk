#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2F93A40151EDD9E3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_36C7066429509F9E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x191A62E0)
#define CLASS_1_36C7066429509F9E_METHOD_1_B21AC53070C59890_OFFSET UNITYSDK_OFFSET(0x191A62F0)
#define CLASS_1_36C7066429509F9E_METHOD_1_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x191A63D0)
#define CLASS_1_36C7066429509F9E__CTOR_OFFSET UNITYSDK_OFFSET(0x191A6250)

inline static constexpr unsigned int Class_1_36C7066429509F9E_TypeDefinitionIndex = 12939;

class Class_1_36C7066429509F9E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_1_0; // 0x10
	::Class_1_2F93A40151EDD9E3* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36C7066429509F9E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_2F93A40151EDD9E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2F93A40151EDD9E3*))((::PBYTE)hIl2Cpp + CLASS_1_36C7066429509F9E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B21AC53070C59890(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_36C7066429509F9E_METHOD_1_B21AC53070C59890_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36C7066429509F9E_METHOD_1_ED65AE7582736594_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_52F51ECF03644FA0.h"
#include "unitysdk/System/Object.h"

class Class_1_7AD0D37BC433CC95_Class_1_97CBD1F3BEC51D06;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018_METHOD_1_430A6ED9A422E83A_OFFSET UNITYSDK_OFFSET(0xA8D4F80)
#define CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018_METHOD_1_58AFEBEE5BA3C366_OFFSET UNITYSDK_OFFSET(0xA8D4560)
#define CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018_METHOD_1_5C40968D56CC2F5C_OFFSET UNITYSDK_OFFSET(0xA8D5110)
#define CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xA8D4750)
#define CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018_METHOD_1_D0ADC6109BE45179_OFFSET UNITYSDK_OFFSET(0xA8D4D70)
#define CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018__CTOR_OFFSET UNITYSDK_OFFSET(0xA8D4460)

inline static constexpr unsigned int Class_1_7AD0D37BC433CC95_Class_1_49DF59B41E5CF018_TypeDefinitionIndex = 41758;

class Class_1_7AD0D37BC433CC95_Class_1_49DF59B41E5CF018 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Enum_3_52F51ECF03644FA0>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Type*>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_7AD0D37BC433CC95_Class_1_97CBD1F3BEC51D06*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_7AD0D37BC433CC95_Class_1_97CBD1F3BEC51D06*>*))((::PBYTE)hIl2Cpp + CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_52F51ECF03644FA0 Method_1_D0ADC6109BE45179(::UnityEngine::Object* a1)
	{
		return ((::Enum_3_52F51ECF03644FA0(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018_METHOD_1_D0ADC6109BE45179_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_430A6ED9A422E83A(::UnityEngine::Object*& a1, ::Enum_3_52F51ECF03644FA0& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*&, ::Enum_3_52F51ECF03644FA0&))((::PBYTE)hIl2Cpp + CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018_METHOD_1_430A6ED9A422E83A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Object* Method_1_5C40968D56CC2F5C(::UnityEngine::GameObject* a1, ::Enum_3_52F51ECF03644FA0& a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_52F51ECF03644FA0&))((::PBYTE)hIl2Cpp + CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018_METHOD_1_5C40968D56CC2F5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_58AFEBEE5BA3C366(::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_7AD0D37BC433CC95_Class_1_97CBD1F3BEC51D06*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_7AD0D37BC433CC95_Class_1_97CBD1F3BEC51D06*>*))((::PBYTE)hIl2Cpp + CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018_METHOD_1_58AFEBEE5BA3C366_OFFSET))(this, a1);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD0D37BC433CC95_CLASS_1_49DF59B41E5CF018_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}
};

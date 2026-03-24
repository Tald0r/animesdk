#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_368BA05DC0912CDA_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x9567090)
#define CLASS_1_368BA05DC0912CDA_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x95671D0)
#define CLASS_1_368BA05DC0912CDA_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x9567260)
#define CLASS_1_368BA05DC0912CDA__CTOR_OFFSET UNITYSDK_OFFSET(0x9566F50)

inline static constexpr unsigned int Class_1_368BA05DC0912CDA_TypeDefinitionIndex = 50913;

class Class_1_368BA05DC0912CDA : public ::System::Object
{
public:
	static ::Class_1_368BA05DC0912CDA** StaticGet_Field_1_6()
	{
		return (::Class_1_368BA05DC0912CDA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_368BA05DC0912CDA_TypeDefinitionIndex)->GetStaticField(0x409C0);
	}
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt64, ::Share::EItemType>, ::System::Int32>* Field_1_4; // 0x10
	::System::Object* Field_1_3; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_5; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x2C
	::System::UInt32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_368BA05DC0912CDA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_368BA05DC0912CDA_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	static ::Class_1_368BA05DC0912CDA* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_368BA05DC0912CDA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_368BA05DC0912CDA_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Void Method_1_E9D938B6A30770AD(::Class_1_368BA05DC0912CDA* a1)
	{
		return ((::System::Void(*)(::Class_1_368BA05DC0912CDA*))((::PBYTE)hIl2Cpp + CLASS_1_368BA05DC0912CDA_METHOD_1_E9D938B6A30770AD_OFFSET))(a1);
	}
};

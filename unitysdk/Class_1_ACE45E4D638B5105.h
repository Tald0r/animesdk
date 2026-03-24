#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ACE45E4D638B5105_METHOD_1_C0291990AF04670D_OFFSET UNITYSDK_OFFSET(0x670E240)
#define CLASS_1_ACE45E4D638B5105_METHOD_1_CE196B76F6D02F5E_OFFSET UNITYSDK_OFFSET(0x670E150)
#define CLASS_1_ACE45E4D638B5105_METHOD_1_EC3EBA0B8B67AA5D_OFFSET UNITYSDK_OFFSET(0x670E340)
#define CLASS_1_ACE45E4D638B5105__CTOR_OFFSET UNITYSDK_OFFSET(0x670E140)

inline static constexpr unsigned int Class_1_ACE45E4D638B5105_TypeDefinitionIndex = 68849;

class Class_1_ACE45E4D638B5105 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACE45E4D638B5105__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CE196B76F6D02F5E(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ACE45E4D638B5105_METHOD_1_CE196B76F6D02F5E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_C0291990AF04670D(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_ACE45E4D638B5105_METHOD_1_C0291990AF04670D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_EC3EBA0B8B67AA5D(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ACE45E4D638B5105_METHOD_1_EC3EBA0B8B67AA5D_OFFSET))(this, a1);
	}
};

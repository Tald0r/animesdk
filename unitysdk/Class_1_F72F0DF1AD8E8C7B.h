#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_15;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x8D9EC50)
#define CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_88E647B67ABF78BD_OFFSET UNITYSDK_OFFSET(0x8D9E960)
#define CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_D03A29DB2C447FBA_OFFSET UNITYSDK_OFFSET(0x8D9E670)
#define CLASS_1_F72F0DF1AD8E8C7B__CTOR_OFFSET UNITYSDK_OFFSET(0x8D9E660)

inline static constexpr unsigned int Class_1_F72F0DF1AD8E8C7B_TypeDefinitionIndex = 69170;

class Class_1_F72F0DF1AD8E8C7B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F72F0DF1AD8E8C7B__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_15*>* Method_1_D03A29DB2C447FBA(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_15*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_D03A29DB2C447FBA_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_15*>* Method_1_88E647B67ABF78BD(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_15*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_88E647B67ABF78BD_OFFSET))(a1);
	}

	static ::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F72F0DF1AD8E8C7B_METHOD_1_19FB5FBEA9EA66CD_OFFSET))();
	}
};

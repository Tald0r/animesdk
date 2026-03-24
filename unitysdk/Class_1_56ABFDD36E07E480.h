#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_56ABFDD36E07E480__CTOR_OFFSET UNITYSDK_OFFSET(0x92E4BC0)

inline static constexpr unsigned int Class_1_56ABFDD36E07E480_TypeDefinitionIndex = 76260;

class Class_1_56ABFDD36E07E480 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_56ABFDD36E07E480__CTOR_OFFSET))(this, a1);
	}
};

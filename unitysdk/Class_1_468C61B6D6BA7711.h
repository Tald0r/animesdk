#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_884BC23D25390AD2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_468C61B6D6BA7711__CTOR_OFFSET UNITYSDK_OFFSET(0x16C57BC0)

inline static constexpr unsigned int Class_1_468C61B6D6BA7711_TypeDefinitionIndex = 72379;

class Class_1_468C61B6D6BA7711 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_884BC23D25390AD2*>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x30
	::System::Int32 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468C61B6D6BA7711__CTOR_OFFSET))(this);
	}
};
